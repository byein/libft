/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 13:41:40 by yebkim            #+#    #+#             */
/*   Updated: 2021/06/23 20:18:17 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*dest;

	if (!(dest = malloc(count * size)))
		return (0);
	ft_bzero(dest, count * size);
	return (dest);
}
