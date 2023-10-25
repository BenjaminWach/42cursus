/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:46:45 by bwach             #+#    #+#             */
/*   Updated: 2023/10/24 22:50:33 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;

	i = 0;
	dst_len = ft_strlen(dst);
	while (dst_len + i + 1 < dstsize && src[i])
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	if (dst[i + dst_len] < dstsize)
		dst[i + dst_len] = '\0';
	else if (dstsize > 0)
		dst[dstsize - 1] = '\0';
	else 
		while (src[i])
			i++;
	return (i + dst_len);
}
