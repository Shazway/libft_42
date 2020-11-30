/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 00:14:13 by telli             #+#    #+#             */
/*   Updated: 2020/11/30 05:19:24 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	bzero(void *s, size_t n)
{
	int i;

	i = 0;
	while(s && i < n)
	{
		s[i] = '\0';
		i++;
	}
}