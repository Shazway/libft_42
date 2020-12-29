/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 01:44:13 by telli             #+#    #+#             */
/*   Updated: 2020/12/29 19:01:17 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	size_t i;
	size_t j;

	i = 0;
	while (dest[i] && i < n)
		i++;
	j = i;
	while (src[i - j] && i < n- 1)
	{
		src[i] = src[i - j];
		i++;
	}
	if (j < n)
		s1[i] = '\0';
	return (j + ft_strlen(src));
}