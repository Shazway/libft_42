/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 00:57:29 by telli             #+#    #+#             */
/*   Updated: 2020/12/29 18:02:21 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *temp;

	temp = (unsigned char *)s;
	i = 0;
	while (temp[i] && i < n)
	{
		if (temp[i] == c)
			return (temp + (unsigned char)i);
		i++;
	}
	return (NULL);
}