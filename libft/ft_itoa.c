/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwach <bwach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 23:39:02 by bwach             #+#    #+#             */
/*   Updated: 2023/10/25 08:09:45 by bwach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int ft_get_digits(int n)
{
    unsigned int    length;

    length = 1;
    while (n /= 10)
        length++;
    return (length);
}

char    ft_itoa(int n)
{
    unsigned char   *mem;
    size_t          digit;
    size_t          num;

    num = n;
    digit = ft_get_digits(n);
    mem = (char *)malloc(sizeof(unsigned char)*(digit +1));
    if (n < 0)
    {
        num *= -1;
        digit++;
    }
    if (!mem)
        return (NULL);
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