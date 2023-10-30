/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 23:39:02 by bwach             #+#    #+#             */
/*   Updated: 2023/10/30 01:18:44 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_digits(int n)
{
	int	length;

	length = 1;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*mem;
	size_t			digit;
	size_t			num;

	num = n;
	digit = ft_get_digits(n);
	mem = (char *)malloc(sizeof(char) * (digit +1));
	if (!mem)
		return (0);
	if (n < 0)
	{
		num *= -1;
		digit++;
	}
	mem[digit] = 0;
	while (digit--)
	{
		mem[digit] = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		mem[0] = '-';
	return (mem);
}
