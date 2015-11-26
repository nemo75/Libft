/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaincha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:07:30 by mpaincha          #+#    #+#             */
/*   Updated: 2015/11/25 16:29:52 by mpaincha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void			*src_tmp;

	src_tmp = (void *)malloc(sizeof(void) * len);
	ft_memcpy(src_tmp, src, len);
	ft_memcpy(dst, src_tmp, len);
	free(src_tmp);
	return (dst);
}
