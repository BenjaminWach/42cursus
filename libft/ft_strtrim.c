/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:34:39 by bwach             #+#    #+#             */
/*   Updated: 2023/10/25 13:13:56 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			i;
	size_t			j;
	unsigned char	*mem;

	i = 0;
	j = 0;
	mem = (char *)malloc(sizeof(unsigned char) * ft_strlen(s1));
	if (!mem)
		return (NULL);
	while (s1[i])
	{
		if (s1[i] != set[j])
		{
			mem[i] = s[i];
			j++;
		}
		i++;
	}
	return (mem);
}
