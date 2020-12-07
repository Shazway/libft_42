/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 01:44:13 by telli             #+#    #+#             */
/*   Updated: 2020/12/07 19:34:42 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	j = -1;
	i = 0;
	while(dest[i])
		i++;
	while (src[++j] && j < size)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (j + size);
}