/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 00:57:29 by telli             #+#    #+#             */
/*   Updated: 2020/11/30 05:21:17 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(const void *s, int c, size_t n)
{
	int i;

	i = -1;
	while (s[++i] && i < n)
		if (s[i] == c)
			return (s[i]);
	return (NULL);
}