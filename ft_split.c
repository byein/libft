/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 15:08:30 by yebkim            #+#    #+#             */
/*   Updated: 2021/06/13 08:24:59 by yebkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_word_count(char const *s, char const c)
{
	int		i;
	int		cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			cnt++;
			while (s[i] && (s[i] != c))
				i++;
		}
	}
	return (cnt);
}

char	*ft_get_word(char *word, char const *s, int j, int len)
{
	int		i;

	i = 0;
	while (len)
	{
		word[i] = s[j - len];
		i++;
		len--;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split2(char **str, char const *s, char const c, int cnt)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	while (s[j] && i < cnt)
	{
		len = 0;
		while (s[j] && s[j] == c)
			j++;
		while (s[j] && s[j] != c)
		{
			len++;
			j++;
		}
		if (!(str[i] = (char *)malloc(sizeof(char) * (len + 1))))
			return (0);
		ft_get_word(str[i], s, j, len);
		i++;
	}
	str[i] = 0;
	return (str);
}

char	**ft_split(char const *s, char const c)
{
	int		cnt;
	char	**str;

	if (!s)
		return (0);
	cnt = ft_word_count(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (cnt + 1))))
		return (0);
	ft_split2(str, s, c, cnt);
	return (str);
}
