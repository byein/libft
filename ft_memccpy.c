/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 20:47:54 by yebkim            #+#    #+#             */
/*   Updated: 2021/06/12 19:29:54 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
		const void *restrict src, int c, size_t n)
{
	unsigned char		*dest;
	unsigned char		*source;
	size_t				i;

	i = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (i < n)
	{
		dest[i] = source[i];
		if (dest[i] == (unsigned char)c)
			return (&dst[i + 1]);
		i++;
	}
	return (0);
}
