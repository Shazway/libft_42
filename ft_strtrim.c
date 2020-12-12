/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 13:26:23 by telli             #+#    #+#             */
/*   Updated: 2020/12/12 20:57:34 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isset(char const *set, char c)
{
	int i;

	i = 0;
	while(set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_countchars(int i, char *set, char *s1)
{
	int count;

	count = 0;
	while(ft_isset(set, s1[i]) == 1 && s1[i])
		i++;
	while(ft_isset(set, s1[i] && s1[i]) == 0)
	{
		count++;
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *dest;
	int i;
	int j;

	if (!(dest = malloc(sizeof(char) * (ft_countchars(i, set, s1) + 1))))
		return NULL;
	i = 0;
	j = 0;
	while (ft_isset(set, s1[i]))
		i++;
	while (ft_isset(set, s1[i]))
	{
		dest[j] = s1[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return ((char *)(dest));
}