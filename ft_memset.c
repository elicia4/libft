/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarguer <kmarguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:39:17 by kmarguer          #+#    #+#             */
/*   Updated: 2021/10/26 12:39:41 by kmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(const void *str, int _char, size_t n)
{
	unsigned char	*new;
	size_t			i;

	i = 0;
	new = (unsigned char *)str;
	while (i < n)
		new[i++] = _char;
	return (new);
}
