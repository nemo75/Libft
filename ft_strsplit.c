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

int		ft_count_words(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c && s[i + 1] && s[i + 1] != c)
			count++;
		i++;
	}
	return (count)
}


/*char	**ft_strsplit(char const *s, char c)
{
	char	**str;

	
	return (str)
}*/
