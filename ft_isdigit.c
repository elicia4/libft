/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarguer <kmarguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:35:05 by kmarguer          #+#    #+#             */
/*   Updated: 2021/10/26 12:35:05 by kmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int _char)
{
	if ((_char >= 48) && (_char <= 57))
		return (1);
	else
		return (0);
}
