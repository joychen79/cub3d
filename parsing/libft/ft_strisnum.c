/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:46:47 by jingchen          #+#    #+#             */
/*   Updated: 2024/10/13 11:47:11 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks all values of a string to verify they are numeric.
 * Return 1 if true and 0 if false.
*/
int	ft_strisnum(char *c)
{
	while (*c)
	{
		if (*c < 48 || *c > 57)
			return (0);
		c++;
	}
	return (1);
}
