/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:55:08 by jingchen          #+#    #+#             */
/*   Updated: 2024/10/13 11:55:31 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_matrix_size(char **env)
{
	int	count;

	count = 0;
	while (*env)
	{
		count++;
		env++;
	}
	return (count);
}

char	**ft_sort_matrix(char **mat)
{
	int		i;
	int		j;
	int		len;
	char	*aux;

	i = 0;
	len = ft_get_matrix_size(mat);
	while (i < len)
	{
		j = -1;
		while (++j < (len - i - 1))
		{
			aux = mat[j];
			if (ft_strcmp(mat[j], mat[j + 1]) > 0)
			{
				aux = mat[j];
				mat[j] = mat[j + 1];
				mat[j + 1] = aux;
			}
		}
		i++;
	}
	return (mat);
}
void	ft_printmatrix(char **matrix)
{
	while (*matrix)
		ft_printf("%s\n", *matrix++);
}