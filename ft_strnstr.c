/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaincha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:42:25 by mpaincha          #+#    #+#             */
/*   Updated: 2015/11/25 17:38:55 by mpaincha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = 0;
	if (ft_strlen(s2) > ft_strlen(s1))
		return (0);
	else
	{
		while (s1[i] != '\0')
		{
			while (s2[j] != '\0' && s1[i + j] == s2[j] && i + j < n)
				j++;
			if (s2[j] == '\0')
			{
				ptr = (char *)&s1[i];
				return (ptr);
			}
			i++;
			j = 0;
		}
		return (NULL);
	}
}
