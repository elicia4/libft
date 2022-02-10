/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarguer <kmarguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:35:47 by kmarguer          #+#    #+#             */
/*   Updated: 2021/11/01 10:05:11 by kmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int _char, size_t n)
{
	const char	*_str;

	_str = (const char *)str;
	while (n--)
	{
		if (*_str == (char)_char)
			return ((void *)_str);
		_str++;
	}
	return (0);
}
