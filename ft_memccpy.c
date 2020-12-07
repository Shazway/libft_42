/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 00:31:18 by telli             #+#    #+#             */
/*   Updated: 2020/12/07 18:09:10 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int i;
	unsigned char *cast_dest;
	unsigned char *cast_src;

	cast_dest = (unsigned char *)dest;
	cast_src = (unsigned char *)src;
	i = -1;
	while (cast_src[++i] && i < n)
	{	
		if (cast_dest[i] == c)
			return(cast_dest[++i]);
		cast_dest[i] = cast_src[i];
		i++;
	}
	return (NULL);
}