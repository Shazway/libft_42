/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 13:44:25 by tmoragli          #+#    #+#             */
/*   Updated: 2021/01/23 13:47:52 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next != NULL)
	{
		if (lst->next == NULL)
			return(lst);
		lst = lst->next;
	}
	return(lst);
}