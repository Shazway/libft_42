/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 01:19:29 by telli             #+#    #+#             */
/*   Updated: 2020/12/07 17:39:27 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	char temp;

	temp = (char)c;
	if ((temp >= 'a' && temp <= 'z') 
	|| (temp >= 'A' && temp <= 'Z')
	|| (temp >= '0' && temp <= '9'))
		return (1);
	return (0);
}