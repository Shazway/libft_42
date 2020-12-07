/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 13:26:23 by telli             #+#    #+#             */
/*   Updated: 2020/12/07 19:56:19 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int beg;
	int end;
	int size;
	int i;

	beg = 0;
	end = 0;
	while (s1[end])
		end++;
	size = end;
	i = 0;
	while (set[i])
	{	
		if (set[i] == s1[beg])
			size -= 1; 
		if (set[i] == s1[end])
			size -= 1;
	}
	return ((char *)s1);
}