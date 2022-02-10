/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarguer <kmarguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:27:19 by kmarguer          #+#    #+#             */
/*   Updated: 2021/10/26 12:28:34 by kmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		s_len;
	char	*d;

	s_len = ft_strlen(s);
	d = (char *)malloc((s_len + 1) * sizeof(char));
	if (d == NULL)
		return (NULL);
	d[s_len] = '\0';
	s_len--;
	while (s_len > -1)
	{
		d[s_len] = s[s_len];
		s_len--;
	}
	return (d);
}
