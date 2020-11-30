/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 15:39:42 by telli             #+#    #+#             */
/*   Updated: 2020/11/30 05:13:38 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_neg(char *str, int i)
{
	if (str[i] == '-')
	{
		if (str[i + 1] == '-' || str[i + 1] == '+')
			return (0);
		i++;
		return(-1)
	}
	if (str[i] == '+')
	{
		if (str[i + 1] == '-' || str[i + 1] == '+')
			return (0);
		i++;
		return (1);
	}
	return (1);
}

int		ft_atoi(cha *str)
{
	int i;
	int sign;

	i = 0;
	while (st[i] && str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	sign = ft_is_neg(str, &i);
	if (str[i] < 0 || str[i] > 9)
		return (0);
	nb = 0;
	while (str[i] <= '9' && str[i] >= '0')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}