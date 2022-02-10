/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarguer <kmarguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:15:38 by kmarguer          #+#    #+#             */
/*   Updated: 2021/11/02 15:16:59 by kmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*is_found(const char *str, int _char)
{
	while ((*str) && (*str != (char)_char))
		str++;
	if (*str == (char)_char)
		return ((char *)str);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	left;
	size_t	right;
	char	*res;

	left = 0;
	right = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[left] && is_found(set, s1[left]))
		left++;
	while (right && is_found(set, s1[right]))
		right--;
	res = ft_substr(s1, left, right - left + 1);
	return (res);
}
