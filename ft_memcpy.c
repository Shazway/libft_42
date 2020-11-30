/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 00:21:17 by telli             #+#    #+#             */
/*   Updated: 2020/11/30 05:21:21 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;
	unsigned char *cast_dest;
	unsigned char *cast_src;

	cast_dest = (unsigned char *)dest;
	cast_src = (unsigned char *)src;
	i = -1;
	while (cast_src[++i] && i < n)
		cast_dest[i] = cast_src[i];
	return (cast_dest);
}