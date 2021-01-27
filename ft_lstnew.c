/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 13:04:42 by tmoragli          #+#    #+#             */
/*   Updated: 2021/01/27 15:52:36 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *newelem;

	if (!(newelem = malloc(sizeof(t_list *))))
		return (NULL);
	newelem->next = NULL;
	newelem->content = content;
	return (newelem);
}
