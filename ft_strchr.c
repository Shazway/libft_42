/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 01:32:10 by telli             #+#    #+#             */
/*   Updated: 2020/11/30 05:22:29 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strchr(const char *s, int c)
{
	int i;

	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (str[i]);
	return (NULL);
}