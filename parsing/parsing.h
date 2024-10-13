/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:20:47 by jingchen          #+#    #+#             */
/*   Updated: 2024/10/13 13:57:46 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "../libft/libft.h"

void    print_errors(char *errors);
char	**read_map(char **argv);
void    check_closed_walls(char **map);

enum e_values
{
    NO,
    SO,
    WE,
    EA,
    F,
    C,
    ERROR
};

typedef struct s_color
{
	int	red;
	int	green;
	int	blue;
	int	alpha;
}	t_color;

/*typedef struct s_vector
{
	double	x;
	double	y;
}	t_vector;

typedef struct s_img
{
	void	*img;
	char	*addr;
	int		bpp;
	int		line_len;
	int		endian;
	int		height;
	int		width;
}	t_img;

typedef struct s_map_data
{
	char	*texture_no;
	char	*texture_so;
	char	*texture_we;
	char	*texture_ea;
	int		max_x;
	int		max_y;
	t_color	floor;
	t_color	ceiling;
}	t_map_data;

enum e_keys
{
	W = 13,
	A = 0,
	S = 1,
	D = 2,
	UP = 126,
	LEFT = 123,
	DOWN = 125,
	RIGHT = 124,
	ESC = 53
};

/**
 * Player position and direction
*/
/*typedef struct s_player
{
	float		x;
	float		y;
	float		old_x;
	float		old_y;
	float		camera;
	t_vector	dir;
}	t_player;

typedef struct s_camera
{
	int			hit;
	int			offset;
	int			grid_x;
	int			grid_y;
	int			**buffer;
	float		x;
	float		y;
	float		stepx;
	float		stepy;
	float		camerax;
	float		directionx;
	float		directiony;
	t_vector	plane;
	float		raydirx;
	float		raydiry;
	float		dx;
	float		dy;
	float		sidedx;
	float		sidedy;
	float		distance;
	double		wallx;
	double		wally;
	double		textx;
	double		texty;
	float		lineheight;
	double		increase;
	double		textpos;
}	t_camera;

typedef struct s_texture
{
	t_img	img;
	int		*text_value;
}	t_texture;

typedef struct s_game
{
	void		*mlx;
	void		*win;
	char		**map;
	t_map_data	map_data;
	t_img		img;
	t_player	player;
	t_camera	cam;
	t_texture	textu_n;
	t_texture	textu_s;
	t_texture	textu_e;
	t_texture	textu_w;
}	t_game;*/

#endif