/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:34:39 by bwach             #+#    #+#             */
/*   Updated: 2023/10/25 21:50:46 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	trim_len(char const *s1, char const *set)
{
	size_t	i;
	size_t	trimmed_len;

	i = 0;
	trimmed_len = 0;
	while (s1[i])
	{
		if(!ft_strchr(set, s1[i]))
			trimmed_len++;
		i++;
	}
	return (trimmed_len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			i;
	size_t			j;
	unsigned char	*mem;

	i = 0;
	j = 0;
	mem = (char *)malloc(sizeof(unsigned char) * (trim_len(s1, set) + 1));
	if (!mem)
		return (NULL);
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
		{
			mem[j] = s[i];
			j++;
		}
		i++;
	}
	mem[j] = '\0';
	return (mem);
}
