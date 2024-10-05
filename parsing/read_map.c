/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:12:51 by jingchen          #+#    #+#             */
/*   Updated: 2024/10/05 14:00:52 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

static void check_extension(char **argv)
{
	char    *extension;

	extension = ft_strrchr(argv[1], '.');
	if (!extension || ft_strncmp(extension, ".cub", ft_strlen(extension)))
		print_errors("Invalid Map Extension!");
}

static void validate_map_lines(char *line) 
{
    static unsigned int count = 0;
    static int          flag_enter = 0;
    static int          flag_exit = 0;

    if (count < 6 && ft_strlen(line) > 1) 
    {
        count++;
    }
    if (count == 6 && ft_strlen(line) > 1 && !flag_enter) 
    {
        flag_enter = 1;
    }
    if (flag_enter && ft_strlen(line) == 1 && !flag_exit) 
    {
        flag_exit++;
    }
    if (flag_exit && (ft_strlen(line) > 1 || *line != '\n')) 
    {
        raise_error("empty line in map");
    }
}

static char	*get_lines(int fd)
{
	char	*file;
	char	*line;

	line = get_next_line (fd);
	file = ft_calloc (1, 1);
	if (!file)
		exit (1);
	while (line != NULL)
	{
		check_map_empty_line(line);
		file = ft_fstrjoin(file, line);
		free(line);
		line = get_next_line(fd);
	}
	free (line);
	return (file);
}

char	**read_map(char **argv)
{
	char	*file;
	int		fd;
	char	**map;

	check_extension (argv);
	fd = open (argv[1], O_RDONLY);
	if (fd == -1)
		print_errors ("Error when opening file. Does the file exist?");
	if (read(fd, 0, 1) == 0)
		print_errors ("Empty map file");
	file = get_lines (fd);
	close (fd);
	map = ft_split (file, '\n');
	free (file);
	return (map);
}