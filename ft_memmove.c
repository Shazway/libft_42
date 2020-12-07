/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 00:40:43 by telli             #+#    #+#             */
/*   Updated: 2020/12/07 19:11:37 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char temp[n];
	unsigned char *cast_dest;
	unsigned char *cast_src;
	size_t i;

	cast_dest = (unsigned char *)dest;
	cast_src = (unsigned char *)src;
	i = -1;
	while(cast_src[++i] && i < n)
		temp[i] = cast_src[i];
	temp[i] = '\0';
	i = -1;
	while (temp[++i] && i < n)
		cast_dest[i] = temp[i];
	cast_dest[i] = '\0';
	return (cast_dest);
}