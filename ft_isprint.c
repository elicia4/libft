/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarguer <kmarguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:35:07 by kmarguer          #+#    #+#             */
/*   Updated: 2021/10/26 12:35:19 by kmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int _char)
{
	if ((_char >= 32) && (_char < 127))
		return (1);
	else
		return (0);
}
