/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 00:57:29 by telli             #+#    #+#             */
/*   Updated: 2020/12/07 17:48:58 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *dest, const void *src, int c, size_t n)
{
	int i;

	i = -1;
	while (s[++i] && i < n)
		if (s[i] == c)
			return (s[i]);
	return (NULL);
}