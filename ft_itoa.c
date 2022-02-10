/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarguer <kmarguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:11:35 by kmarguer          #+#    #+#             */
/*   Updated: 2021/11/02 13:24:19 by kmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	xor_swap(char *x, char *y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}

static void	rev(char *p)
{
	int		i;
	int		len;
	char	*p_copy;

	p_copy = p;
	i = -1;
	len = ft_strlen(p_copy) - 1;
	while (++i < len)
	{
		xor_swap(&p_copy[i], &p_copy[len]);
		len--;
	}
}

static int	num_len(int n)
{
	int	counter;

	counter = 0;
	if (n < 1)
		counter++;
	while (n != 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

static char	*itoa_itself(int n, char *p, int is_neg, int n1)
{
	int	i;
	int	len;

	if (is_neg == -1)
		len = num_len(n) - 1;
	else
		len = num_len(n);
	i = -1;
	while (++i < len)
	{
		*(p + i) = '0' + (n1 % 10) * is_neg;
		n1 /= 10;
	}
	if (is_neg == -1)
	{
		*(p + i) = '-';
		i++;
	}
	p[num_len(n)] = '\0';
	rev(p);
	return (p);
}

char	*ft_itoa(int n)
{
	int		n1;
	int		is_neg;
	char	*p;

	is_neg = 1;
	n1 = n;
	p = (char *)malloc(sizeof(char) * (num_len(n) + 1));
	if (!p)
		return (NULL);
	if (n < 0)
		is_neg = -1;
	p = itoa_itself(n, p, is_neg, n1);
	return (p);
}
