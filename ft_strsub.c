/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaincha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:54:58 by mpaincha          #+#    #+#             */
/*   Updated: 2015/11/27 14:55:00 by mpaincha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = ft_strnew(len + 1);
	if (str == NULL)
		return (NULL);
	ft_strncpy(str, (char *)&s[start], len);
	str[len + 1] = '\0';
	ft_putstr(str);
	return(str);
}