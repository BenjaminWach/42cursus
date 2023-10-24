/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:26:55 by bwach             #+#    #+#             */
/*   Updated: 2023/10/24 15:47:33 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*d;
	unsigned int	i;
	unsigned int	j;

	i = start;
	j = 0;
	d = (char *) malloc(sizeof(char) * (len + 1));
	if (!d)
		return (NULL);
	while (j < len)
	{
		d[j++] = s[i++];
	}
	d[j] = '\0';
	return (d);
}
