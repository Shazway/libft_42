/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 01:32:10 by telli             #+#    #+#             */
/*   Updated: 2020/12/08 17:47:22 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = -1;
	if (c == '\0')
		return ('\0')
	while (s[++i])
		if (s[i] == c)
			return ((char *)(&s[i]));
	return (NULL);
}