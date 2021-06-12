/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:29:14 by yebkim            #+#    #+#             */
/*   Updated: 2021/06/12 21:26:20 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	find;
	size_t	i;

	find = (char)c;
	i = ft_strlen(s);
	while (i)
	{
		if (s[i] == find)
			return ((char *)&s[i]);
		i--;
	}
	if (find == '\0' || s[i] == find)
		return ((char *)s);
	return (0);
}
