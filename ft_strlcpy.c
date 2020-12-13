/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 20:21:34 by telli             #+#    #+#             */
/*   Updated: 2020/12/13 07:11:58 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strlcpy(char *dest, const char *src)
{
	int i;

	i = -1;
	while(src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}