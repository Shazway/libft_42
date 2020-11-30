/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 20:26:57 by telli             #+#    #+#             */
/*   Updated: 2020/11/30 05:23:59 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int i;
	int j;

	if (!(s2))
		return (s1);
	i = -1;
	while (s1[++i] && i < len)
	{
		j = 0;
		while (s2[j++])
			if (s1[i] == s2[j])
				return (s2);
	}
	return (NULL);
}