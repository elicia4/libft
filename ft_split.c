/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarguer <kmarguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:13:55 by kmarguer          #+#    #+#             */
/*   Updated: 2021/11/08 16:38:25 by kmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	cpy_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	counter;
	size_t	src_len;

	src_len = 0;
	counter = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (!size)
		return (src_len);
	while (src[counter] && counter < (size - 1))
	{
		dst[counter] = src[counter];
		counter++;
	}
	dst[counter] = '\0';
	return (src_len);
}

static char	*get_word(const char *s, char c)
{
	char	*word;
	int		word_length;

	word_length = 0;
	while (s[word_length] && s[word_length] != c)
		word_length++;
	word_length += 1;
	word = (char *)malloc(sizeof(char) * (word_length));
	if (!word)
		return (NULL);
	cpy_strlcpy(word, s, word_length);
	return (word);
}

static int	counter(const char *s, char c)
{
	int		count;
	char	*copy;

	count = 0;
	copy = (char *)s;
	while (*copy)
	{
		while (*copy == c)
			copy++;
		if (*copy && *copy != c)
			count++;
		while (*copy && *copy != c)
			copy++;
	}
	return (count);
}

static void	free_prev_mem(char **res, int word_num)
{
	int	i;

	i = -1;
	while (++i <= word_num)
		free(res[word_num]);
	free(res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		number_of_words;
	int		word_num;

	number_of_words = counter(s, c);
	word_num = 0;
	res = (char **)malloc(sizeof(char *) * (number_of_words + 1));
	if (!res)
		return (NULL);
	res[number_of_words] = 0;
	while (word_num < number_of_words)
	{
		while (*s == c)
			s++;
		res[word_num] = get_word(s, c);
		if (!res[word_num])
		{
			free_prev_mem(res, word_num);
			return (NULL);
		}
		s += ft_strlen(res[word_num]);
		word_num++;
	}
	return (res);
}
