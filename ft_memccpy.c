/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 00:31:18 by telli             #+#    #+#             */
/*   Updated: 2020/12/29 17:47:55 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char *cast_dest;
	unsigned char *cast_src;

	cast_dest = (unsigned char *)dest;
	cast_src = (unsigned char *)src;
	i = 0;
	while (cast_src[i] && i < n)
	{	
		cast_dest[i] = cast_src[i];
		if (cast_dest[i] == (unsigned char)c)
			return(cast_dest + i + 1);
		i++;
	}
	return (NULL);
}