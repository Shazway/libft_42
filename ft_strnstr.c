/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 20:26:57 by telli             #+#    #+#             */
/*   Updated: 2021/01/12 03:33:49 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	int		j;

	if (len == 0 || !s2[0])
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