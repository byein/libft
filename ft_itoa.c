/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 15:09:22 by yebkim            #+#    #+#             */
/*   Updated: 2021/06/13 01:54:42 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_abs(long num)
{
	return (num < 0 ? -num : num);
}

int		ft_num_len(long num)
{
	int		len;

	len = (num <= 0 ? 1 : 0);
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		sign;

	sign = (n < 0 ? -1 : 1);
	len = ft_num_len(n);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (0);
	str[len] = '\0';
	len--;
	while (len >= 0)
	{
		str[len] = ft_abs(n % 10) + '0';
		n = ft_abs(n / 10);
		len--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
