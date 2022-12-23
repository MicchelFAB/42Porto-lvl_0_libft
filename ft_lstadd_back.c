/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:38:29 by mamaral-          #+#    #+#             */
/*   Updated: 2022/12/23 16:32:26 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Function: ft_lstadd_back
void	ft_lstadd_back(t_list **lst, t_list *new) // Add new element to the end of the list
{
	t_list	*last; // Create a new list

	last = *lst; // Set last to the first element of the list
	if (lst == NULL || new == NULL) // If lst or new are NULL
		return ; // Return to the main function
	if (*lst == NULL) // If lst is NULL
	{
		*lst = new; // Set lst to new
		return ; // Return to the main function
	}
	while (last->next != NULL) // While last->next is not NULL
		last = last->next; // Set last to last->next
	last->next = new; // Set last->next to new
}
