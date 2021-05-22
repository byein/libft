/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 20:47:54 by yebkim            #+#    #+#             */
/*   Updated: 2021/05/22 21:07:18 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;
	unsigned char		ch;
	size_t				i;

	i = 0;
	dest = dst;
	source = (unsigned char *)src;
	ch = c;
	while (i < n)
	{
		dest[i] = source[i];
		if (source[i] == ch)
			return (dest[i + 1]);
		i++;
	}
	return (0);
}
