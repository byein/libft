/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 14:24:45 by yebkim            #+#    #+#             */
/*   Updated: 2021/06/13 06:32:53 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ch_in_set(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		front;
	int		rear;
	char	*str;
	int		i;

	if (!s1 || !set)
		return (0);
	front = 0;
	rear = ft_strlen(s1) - 1;
	while (s1[front] && ft_ch_in_set(s1[front], set))
		front++;
	while (rear > front && ft_ch_in_set(s1[rear], set))
		rear--;
	if (!(str = malloc(sizeof(char) * (rear - front + 2))))
		return (0);
	i = 0;
	while (front <= rear)
		str[i++] = s1[front++];
	str[i] = '\0';
	return (str);
}
