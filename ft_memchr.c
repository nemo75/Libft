/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaincha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:33:04 by mpaincha          #+#    #+#             */
/*   Updated: 2015/11/25 16:51:36 by mpaincha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	*ptr;
	unsigned char	*s1;

	i = 0;
	c1 = (unsigned char)c;
	ptr = 0;
	s1 = (unsigned char *)s;
	while (i < n && s1[i] != c1)
		i++;
	if (s1[i] == c1)
	{
		ptr = &s1[i];
		return (ptr);
	}
	else
		return (NULL);
}
