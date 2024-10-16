/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:34:50 by jingchen          #+#    #+#             */
/*   Updated: 2024/10/13 11:35:17 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;
	size_t	possub;
	size_t	lenstr;

	if (!s)
		return (0);
	lenstr = ft_strlen((char *)s);
	if (start > lenstr)
	{
		sub = malloc(1);
		*sub = 0;
		return (sub);
	}
	if (len > lenstr)
		len = lenstr - start;
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	possub = start + len;
	i = 0;
	while (start < possub && s[start] != 0)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}