/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfalpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 12:00:12 by jingchen          #+#    #+#             */
/*   Updated: 2024/10/13 12:47:58 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *c)
{
	int		len;

	if (!c)
		return (ft_putstr("(null)"));
	len = 0;
	while (c[len])
		len += ft_putchar(c[len]);
	return (len);
}

