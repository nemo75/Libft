/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaincha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:48:10 by mpaincha          #+#    #+#             */
/*   Updated: 2015/11/25 11:13:11 by mpaincha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lg_dst;
	size_t	lg_src;
	size_t	i;

	i = 0;
	lg_dst = ft_strlen(dst);
	lg_src = ft_strlen(src);
	if (size < lg_dst)
		return (size + lg_src);
	while (src[i] && i < (size - lg_dst - 1))
	{
		dst[lg_dst + i] = src[i];
		i++;
	}
	return (lg_dst + lg_src);
}
