/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 00:51:43 by telli             #+#    #+#             */
/*   Updated: 2020/11/30 05:22:39 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar_fd(char c, int fd)
{
    write(1, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if(n == -2147483648)
    {
        ft_putchar('-', fd);
        ft_putchar('2', fd);
        ft_putnbr(147483648);
        return;
    } 
    if(n < 0)
    {
        ft_putchar('-', fd);
        n = -n;
    }
    
    if (n >= 10)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
    {
        ft_putchar(n + '0', fd);
    }
}

