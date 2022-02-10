/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarguer <kmarguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:37:20 by kmarguer          #+#    #+#             */
/*   Updated: 2021/10/26 12:38:31 by kmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*_str1;
	unsigned char	*_str2;

	_str1 = (unsigned char *)str1;
	_str2 = (unsigned char *)str2;
	while (n--)
	{
		if (*_str1 != *_str2)
			return (*(unsigned char *)_str1 - *(unsigned char *)_str2);
		_str1++;
		_str2++;
	}
	return (0);
}
