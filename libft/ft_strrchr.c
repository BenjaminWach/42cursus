/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:07:33 by bwach             #+#    #+#             */
/*   Updated: 2023/10/29 19:38:06 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;

	temp = NULL;
	while (*s)
	{
		if (*s == (char)c)
			temp = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (temp);
}
