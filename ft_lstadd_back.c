/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 13:48:22 by tmoragli          #+#    #+#             */
/*   Updated: 2021/01/23 13:50:16 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstadd_back(t_list **alst, t_list *new)
{
	while (*alst->next != NULL)
		*alst = *alst->next;
	*alst->next = *new;
}