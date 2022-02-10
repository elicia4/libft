/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarguer <kmarguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:38:57 by kmarguer          #+#    #+#             */
/*   Updated: 2021/10/26 12:39:08 by kmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*source;
	char	*destin;

	source = (char *)src;
	destin = (char *)dest;
	if ((n == 0) || (src == dest))
		return (dest);
	while (n--)
		*destin++ = *source++;
	return (dest);
}
