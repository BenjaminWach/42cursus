/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:46:45 by bwach             #+#    #+#             */
/*   Updated: 2023/10/24 14:20:40 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i + 1 < dstsize && src[i])
	{
		dst[i + ft_strlen(src)] = src[i];
		i++;
	}
	if (dest[i + ft_strlen(src)] < dstsize)
		dest[i] = '\0';
	else
		while (src[i])
			i++;
	return (i);
}

