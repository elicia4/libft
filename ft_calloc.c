/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarguer <kmarguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:28:45 by kmarguer          #+#    #+#             */
/*   Updated: 2021/10/26 12:29:52 by kmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char			*p;
	unsigned int	total_size;

	p = malloc(nmemb * size);
	if (p == NULL || size == 0)
		return (p);
	total_size = nmemb * size;
	while (total_size--)
		p[total_size] = 0;
	return ((void *)p);
}
