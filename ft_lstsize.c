/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarguer <kmarguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:15:13 by kmarguer          #+#    #+#             */
/*   Updated: 2021/11/08 19:59:02 by kmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		lstsize;
	t_list	*start;

	start = lst;
	lstsize = 0;
	while (start)
	{
		start = start->next;
		lstsize++;
	}
	return (lstsize);
}
