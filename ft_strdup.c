/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaincha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 13:51:15 by mpaincha          #+#    #+#             */
/*   Updated: 2015/11/25 17:28:07 by mpaincha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*strdup;
	int		i;

	strdup = (char *)malloc(sizeof(char) * (ft_strlen((char *)s1) + 1));
	i = 0;
	while (s1[i] != '\0')
	{
		strdup[i] = (char)s1[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}
