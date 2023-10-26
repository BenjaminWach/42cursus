/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:49:26 by bwach             #+#    #+#             */
/*   Updated: 2023/10/26 12:55:16 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	n;
	void	*s;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	n = count * size;
	s = malloc(n);
	if (!s)
		return (NULL);
	else
		ft_bzero(s, n);
	return (s);
}
