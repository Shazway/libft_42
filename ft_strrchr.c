/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 01:35:19 by telli             #+#    #+#             */
/*   Updated: 2020/12/13 07:08:19 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	if (!s)
		return NULL;
	while (s[i])
		i++;
	i++;
	while (--i > 0)
		if (s[i] == c)
			return ((char *)(&s[i]));
	return ((char *)(s));
}