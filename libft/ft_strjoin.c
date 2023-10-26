/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:46:06 by bwach             #+#    #+#             */
/*   Updated: 2023/10/26 11:38:39 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*mem;
	int				total_len;
	size_t			i;
	size_t			j;

	i = 0;
	j = ft_strlen(s1);
	total_len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	mem = (char *)malloc(sizeof(char) * (total_len));
	if (!mem)
		return (NULL);
	while (s1[i])
	{
		mem[i] = s1[i];
		while (s2[j])
		{
			mem[i + j] = s2[j];
			j++;
		}
		i++;
	}
	mem[i + j] = '\0';
	return (mem);
}
