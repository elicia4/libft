/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarguer <kmarguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:39:50 by kmarguer          #+#    #+#             */
/*   Updated: 2021/11/01 10:06:16 by kmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int _char)
{
	while ((*str) && (*str != (char)_char))
	{
		str++;
	}
	if (*str == (char)_char)
		return ((char *)str);
	return (0);
}
