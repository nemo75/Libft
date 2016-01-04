/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlsthead.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaincha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 15:27:51 by mpaincha          #+#    #+#             */
/*   Updated: 2015/12/12 13:31:41 by mpaincha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlsthead(t_dbllist *list)
{
	t_elem	*tmp;

	tmp = list->head;
	while (tmp != NULL)
	{
		ft_putstr(tmp->content);
		tmp = tmp->next;
	}
}
