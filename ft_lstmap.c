/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 15:04:46 by tmoragli          #+#    #+#             */
/*   Updated: 2021/01/27 15:34:13 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list    *dest;
	t_list    *temp;

	while (list)
	{
        if (!(temp = ft_lstnew(f(list->content))))
        {
            ft_lstclear(&dest, del);
            return (NULL);
        }
        ft_lstadd_back(&dest, temp);
        list = list->next;
    }
    return (dest);
}