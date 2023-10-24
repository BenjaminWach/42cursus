/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:54:03 by bwach             #+#    #+#             */
/*   Updated: 2023/10/24 10:34:49 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static int	ft_isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
		return (1);
	return (0);
}

static int	ft_islower(int c)
{
	if (c >= 'a' || c <= 'z')
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	return (0);
}
