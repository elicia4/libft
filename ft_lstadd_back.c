/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarguer <kmarguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:36:01 by kmarguer          #+#    #+#             */
/*   Updated: 2021/11/08 18:57:42 by kmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*new_last;

	if (lst)
	{
		if (!*lst)
		{
			*lst = new;
			return ;
		}
		new_last = ft_lstlast(*lst);
		new_last->next = new;
	}
}
