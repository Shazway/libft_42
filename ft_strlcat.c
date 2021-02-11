/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 01:44:13 by telli             #+#    #+#             */
/*   Updated: 2021/02/11 23:41:00 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t lendst;
	size_t lensrc;

	i = 0;
	lendst = ft_strlen(dest);
	lensrc = ft_strlen(src);
	if (size - 1 <= lendst)
		return (lensrc + size);
	while (lendst + i < size - 1)
	{
		dest[lendst + i] = src[i];
		i++;
	}
	dest[lendst + i] = '\0';
	return (lendst + lensrc);
}
