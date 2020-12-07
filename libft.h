/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoragli <tmoragli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 01:10:22 by telli             #+#    #+#             */
/*   Updated: 2020/11/30 16:58:51 by tmoragli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		LIBFT_H
# define	LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
#endif