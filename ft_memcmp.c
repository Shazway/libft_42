/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 01:02:50 by telli             #+#    #+#             */
/*   Updated: 2020/12/07 17:41:43 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n = 0)
		return (0);
	int i;

	i = -1;
	while ((s1[++i] && s2[i]) && i < n)
		if (s1[i] != s2[i])
			return (s2[i] - s1[i]);
	return (s2[i] - s1[i]);
}