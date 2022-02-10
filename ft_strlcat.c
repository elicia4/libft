/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarguer <kmarguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:40:51 by kmarguer          #+#    #+#             */
/*   Updated: 2021/11/10 00:09:41 by kmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_l;
	size_t	src_l;
	size_t	i;

	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	if (size > dst_l)
	{
		i = -1;
		while (++i < src_l && (dst_l + i + 1) < size && src[i])
			dst[dst_l + i] = (char)src[i];
		dst[dst_l + i] = '\0';
		return (dst_l + src_l);
	}
	else
		return (src_l + size);
}
