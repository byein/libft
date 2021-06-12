/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 14:10:44 by yebkim            #+#    #+#             */
/*   Updated: 2021/06/12 23:48:09 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	strlen;

	i = 0;
	if (!s1 || !s2)
		return (0);
	strlen = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = malloc(sizeof(char) * (strlen + 1))))
		return (0);
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	ft_strlcat(str + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (str);
}
