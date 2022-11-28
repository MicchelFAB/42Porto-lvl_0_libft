/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:37:36 by mamaral-          #+#    #+#             */
/*   Updated: 2022/11/22 15:58:21 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Aloca memoria para a criacao de uma lista ligada

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!(new))
	{
		return (NULL);
	}
	new->next = NULL;
	new->content = content;
	return (new);
}	
