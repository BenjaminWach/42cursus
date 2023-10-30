/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:26:55 by bwach             #+#    #+#             */
/*   Updated: 2023/10/29 23:25:06 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*new;
	unsigned int		i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		new = malloc(sizeof(char) * 1);
		new[0] = 0;
		return (new);
	}
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	i = -1;
	while (s[start] && ++i < len)
		new[i] = s[start + i];
	new[i] = '\0';
	return (new);
}
