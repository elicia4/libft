/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarguer <kmarguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:45:11 by kmarguer          #+#    #+#             */
/*   Updated: 2021/10/26 12:46:15 by kmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	if (*little == '\0')
		return ((char *)big);
	while ((big[i]) && (i < len))
	{
		if (little[0] == big[i])
		{
			l = 0;
			while ((little[l] == big[i + l])
				&& ((i + l) < len) && (little[l]))
				l++;
			if (!little[l])
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
