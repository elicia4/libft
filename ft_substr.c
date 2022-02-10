/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarguer <kmarguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:32:32 by kmarguer          #+#    #+#             */
/*   Updated: 2021/11/02 13:23:09 by kmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	str_len;
	size_t	len_c;

	i = -1;
	str_len = ft_strlen(s);
	len_c = len;
	if (len + start > str_len)
		len_c = str_len - start;
	if (start >= str_len)
	{
		substr = (char *)malloc(sizeof(char) * 1);
		if (!(substr))
			return (NULL);
		*substr = '\0';
		return (substr);
	}
	substr = (char *)malloc(sizeof(char) * (len_c + 1));
	if (!(substr))
		return (NULL);
	while (++i < len_c)
		*(substr + i) = *(s + start + i);
	*(substr + len_c) = '\0';
	return (substr);
}
