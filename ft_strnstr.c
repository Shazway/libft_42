/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 20:26:57 by telli             #+#    #+#             */
/*   Updated: 2021/02/12 18:13:31 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		i;
	size_t		j;

	if (!s2[0])
		return ((char *)s1);
	i = 0;
	j = 0;
	while (s1[i] && i < len)
	{
		if (s1[i] == s2[j])
		{
			while (s1[i] == s2[j] && s1[i] && s2[j] && i < len)
			{
				j++;
				i++;
			}
			if (s2[j] == '\0')
				return ((char *)(s1 + (i - j)));
			j = 0;
		}
		i++;
	}
	return (NULL);
}
