/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarguer <kmarguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:25:48 by kmarguer          #+#    #+#             */
/*   Updated: 2021/10/26 12:25:54 by kmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dest, const void	*src, size_t n)
{
	unsigned char	*source;
	unsigned char	*destin;

	source = (unsigned char *)src;
	destin = (unsigned char *)dest;
	if ((n == 0) || (src == dest))
		return (dest);
	if (dest > src)
		while (--n + 1)
			destin[n] = source[n];
	else
		while (n--)
			*destin++ = *source++;
	return (dest);
}
