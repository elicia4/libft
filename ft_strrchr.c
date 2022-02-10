/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarguer <kmarguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:26:36 by kmarguer          #+#    #+#             */
/*   Updated: 2021/10/26 12:26:59 by kmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int _char)
{
	char	*p;

	p = NULL;
	while (*str)
	{
		if (*str == (char)_char)
			p = ((char *)str);
		str++;
	}
	if (*str == (char)_char)
		p = ((char *)str);
	return (p);
}
