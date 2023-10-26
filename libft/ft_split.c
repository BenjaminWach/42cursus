/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:33:03 by bwach             #+#    #+#             */
/*   Updated: 2023/10/26 13:13:05 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *str, char c)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (*str)
	{
		if (*str != c && flag == 0)
		{
			flag = 1;
			i++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (i);
}

static char	*ft_word_mem(const char *str, int first, int last)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(sizeof(char) * (last - first + 1));
	while (first < last)
		word[i++] = str[first++];
	word[i] = '\0';
	return (word);
}

static void	ft_free_mem(char **split)
{
	size_t	i;

	i = 0;
	if (split == 0)
		return ;
	while (split[i])
		free(split[i++]);
	free (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	i = 0;
	j = 0;
	index = -1;
	split = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!s || !split)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index == 0)
			index = 1;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
			split[j++] = ft_word_mem((char *)s, index--, i);
		i++;
	}
	split[j] = NULL;
	ft_free_mem(split);
	return (split);
}
