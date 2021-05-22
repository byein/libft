/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 19:42:00 by yebkim            #+#    #+#             */
/*   Updated: 2021/05/22 21:01:22 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	const unsigned char	*source;
	unsigned char		*dest;
	size_t i;

	if (dst == NULL  && src == NULL)
		return (dst);
	i = 0;
	dest = dst;
	source = src;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
