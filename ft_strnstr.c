/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 20:26:57 by telli             #+#    #+#             */
/*   Updated: 2021/01/09 03:24:03 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	int j;

	if (!(s2))
		return ((char *)(s1));
	i = 0;
	j = 0;
	while (s2[i] && i < len)
	{
		if (s1[j] == s2[i])
		{
			while (s1[j] == s2[i] && s1[j] && s2[i] && i < len)
			{
				j++;
				i++;
			}
			if (s1[j] == '\0')
				return ((char *)(s2 + i);
			j = 0;
		}
		i++;
	}
	return (NULL);
}