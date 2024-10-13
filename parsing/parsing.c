/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:29:54 by jingchen          #+#    #+#             */
/*   Updated: 2024/10/13 13:48:57 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	check_chars(t_game *game, char value, int x, int y)
{
	if (value != '1' && value != '0' && value != 'N'
		&& value != 'S' && value != 'E' && value != 'W' && value != ' ')
		print_error("Invalid value found in map");
	if (value == 'N' || value == 'S' || value == 'E' || value == 'W')
	{
		game->player.y = (x * WALL_SIZE) + WALL_SIZE / 2;
		game->cam.grid_y = y;
		game->player.x = (y * WALL_SIZE) + WALL_SIZE / 2;
		game->cam.grid_x = x;
		return (1);
	}
	return (0);
}

static void	check_map_chars(t_game *game, char **map)
{
	int	x;
	int	y;
	int	player_flag;

	y = -1;
	player_flag = 0;
	while (map[++y])
	{
		x = -1;
		while (map[y][++x])
			player_flag += check_chars(game, map[y][x], x, y);
	}
	if (player_flag > 1)
		print_error("Mutiple players found");
	if (!player_flag)
		print_error("No player position found");
}

void	parsing(char **argv, t_game *game)
{
	char	**file_content;
	char	**map;

	file_content = read_map (argv);
	get_values (game, file_content);
	map = file_content + 6;
	check_map_chars (game, map);
	check_closed_walls (map);
	game->map = map;
}
