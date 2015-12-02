/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaincha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 13:51:15 by mpaincha          #+#    #+#             */
/*   Updated: 2015/12/02 14:23:05 by mpaincha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*strdup;

	strdup = (char *)malloc(sizeof(char) * (ft_strlen((char *)s1) + 1));
	return (ft_strcpy(strdup, s1));
}
