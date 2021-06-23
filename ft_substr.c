/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 13:59:22 by yebkim            #+#    #+#             */
/*   Updated: 2021/06/23 20:25:13 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	strlen;

	i = 0;
	strlen = ft_strlen(s);
	if (!s)
		return (0);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (0);
	if (!s && start > strlen)
		return (ft_strdup(""));
	while (s[i] && i < len && start <= strlen)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
