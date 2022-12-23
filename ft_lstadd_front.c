/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:38:32 by mamaral-          #+#    #+#             */
/*   Updated: 2022/12/23 17:20:27 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Function: ft_lstadd_front
void	ft_lstadd_front(t_list **lst, t_list *new) // Add new element to the beginning of the list
{
	if (lst == NULL || new == NULL) // If lst or new are NULL
		return ;
	new->next = *lst; // Set new->next to lst
	*lst = new; // Set lst to new
}
