/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaincha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:36:33 by mpaincha          #+#    #+#             */
/*   Updated: 2015/11/27 17:36:35 by mpaincha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	str = ft_strnew((ft_strlen(s1) - 1) + ft_strlen(s2));
	str = ft_strcat((char *)s1, (char *)s2);
	return (str);
}
