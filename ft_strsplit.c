/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaincha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:44:37 by mpaincha          #+#    #+#             */
/*   Updated: 2015/12/02 11:15:49 by mpaincha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *s, char c)
{
	int		i;
	int		count;
	int		ok;

	i = 0;
	count = 0;
	ok = 1;
	while (s[i])
	{
		if (s[i] != c && ok)
		{
			count++;
			ok = 0;
		}
		else if (s[i] == c)
			ok = 1;
		i++;
	}
	return (count);
}

int		ft_strlen_words(char const *s, char c)
{
	int		len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	*ft_putword(char const *s, size_t *i, char c)
{
	char	*word;
	int		j;

	word = (char *)malloc(sizeof(char) * ft_strlen_words(s + *i, c) + 1);
	j = 0;
	ft_putnbr(*i);
	ft_putchar('\n');
	while (s[*i] && s[*i] != c)
	{
		word[j] = s[*i];
		*i = *i + 1;
		j++;
	}
	return (word);
}

char	**ft_strsplit(char const *s, char c)
{
	char		**str;
	size_t		i;
	size_t		k;
	size_t		j;

	i = 0;
	k = 0;
	j = 0;
	str = (char **)malloc(sizeof(char *) * ft_count_words(s, c) + 1);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			str[j] = ft_putword(s, &i, c);
			ft_putstr(str[j]);
			j++;
		}
	}
	str[j] = 0;
	return (str);
}
