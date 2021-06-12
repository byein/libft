/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 11:58:00 by yebkim            #+#    #+#             */
/*   Updated: 2021/06/12 19:19:33 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t i;
	size_t dst_len;
	size_t src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	while (dst_len + 1 + i < dstsize && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dstsize < dst_len)
		return (dstsize + src_len);
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
