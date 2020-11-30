/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 00:40:43 by telli             #+#    #+#             */
/*   Updated: 2020/11/30 05:21:23 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *temp;
	unsigned char *cast_dest;
	unsigned char *cast_src;
	int i;

	cast_dest = (unsigned char *dest);
	cast_src = (unsigned char *src);
	i = 0;
	while(cast_src[++i])
		temp[i] = cast_src[i];
	temp[i] = '\0';
	i = -1;
	while (temp[++i] && i < n)
		cast_dest[i] = temp[i];
	cast_dest[i] = '\0';
	return (cast_dest);
}