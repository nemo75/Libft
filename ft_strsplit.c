/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaincha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:44:37 by mpaincha          #+#    #+#             */
/*   Updated: 2015/11/27 16:45:11 by mpaincha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int		ft_count_words(char const *s, char c)
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
		len++
	return (len)

}

char	*ft_putword(char const *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	word = (char *)malloc(sizeof(char) * ft_strlen_words(s, c) + 1)
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	return (word);
}

char	*ft_putindex(char const *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	word = (char *)malloc(sizeof(char) * ft_strlen_words(s, c) + 1)
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	return (i);
}

char	*ft_strtrim_c(char const *s, char	c)
{
	size_t	i;
	size_t	lg_str;
	char	*str;

	i = 0;
	str = ft_strnew(ft_strlen(s));
	lg_str = 0;
	while (s[i] && s[i] == c)
		i++;
	if (s[i] && s[i] != c)
	{
		str = ft_strsub(s, i, ft_strlen(s));
		i++;
	}
	lg_str = ft_strlen(str) - 1;
	while (lg_str > 0 && str[lg_str] == c)
		str[lg_str--] = '\0';
	return (str);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t		i;
	size_t		k;

	i = 0;
	k = 0;
	str = (char **)malloc(sizeof(char *) * ft_count_words(s, c) + 1);
	while (s[i])
	{
		str[i] = ft_putword(ft_strtrim_c(ft_strsub(s, i, ft_strlen(s)), c), ft_putindex(ft_strsub(s, i, ft_strlen(s)), c), c);
		i++;
	}
	return (0);
}
*/