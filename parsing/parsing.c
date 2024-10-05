/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:29:54 by jingchen          #+#    #+#             */
/*   Updated: 2024/10/05 13:59:18 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
