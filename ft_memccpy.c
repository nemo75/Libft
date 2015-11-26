/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaincha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:25:25 by mpaincha          #+#    #+#             */
/*   Updated: 2015/11/25 16:00:29 by mpaincha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	c2;
	unsigned char	*dst1;
	unsigned char	*src1;

	i = 0;
	ptr = 0;
	c2 = (unsigned char)c;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (n == 0)
		return (0);
	while (dst1[i] != c2 && n > i)
	{
		dst1[i] = src1[i];
		i++;
	}
	if (dst1[i] == c2)
	{
		ptr = &dst1[i + 1];
		return (ptr);
	}
	else
		return (0);
}
