/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 08:59:22 by yebkim            #+#    #+#             */
/*   Updated: 2021/06/12 19:37:29 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*tmp;
	unsigned const char	*str;
	size_t				i;

	if (!dst && !src)
		return (dst);
	i = -1;
	tmp = (unsigned char *)dst;
	str = (unsigned char *)src;
	if (dst <= src)
		while (++i < len)
			tmp[i] = str[i];
	else
		while (++i < len)
			tmp[len - 1 - i] = str[len - 1 - i];
	return (tmp);
}
