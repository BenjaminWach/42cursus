/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:46:06 by bwach             #+#    #+#             */
/*   Updated: 2023/10/25 11:03:13 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned char	*mem;
	unsigned int	*total_len;
	size_t			i;
	size_t			j;

	i = 0;
	j = ft_strlen(s1);
	total_len = (ft_strlen(s1) + ft_strlen(s2));
	mem = malloc(sizeof(unsigned char) * total_len);
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
	return (mem);
}
