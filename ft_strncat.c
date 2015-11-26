/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaincha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:03:58 by mpaincha          #+#    #+#             */
/*   Updated: 2015/11/25 17:32:51 by mpaincha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	lg_s1;
	size_t	i;

	i = 0;
	lg_s1 = ft_strlen(s1);
	while (n > i)
	{
		s1[lg_s1 + i] = s2[i];
		i++;
	}
	s1[lg_s1 + i] = '\0';
	return (s1);
}
