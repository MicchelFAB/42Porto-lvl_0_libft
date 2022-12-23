/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:38:37 by mamaral-          #+#    #+#             */
/*   Updated: 2022/12/23 17:22:56 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Function: ft_lstclear
void	ft_lstclear(t_list **lst, void (*del)(void*)) // Delete and free the given element and every successor of that element, using the function ’del’ and free(3)
{
	t_list	*curr; // Create a new list
	t_list	*next; // Create a new list

	curr = *lst; // Set curr to the first element of the list
	while (curr) // While curr is not NULL
	{
		next = curr->next; // Set next to curr->next
		ft_lstdelone(curr, del); // Delete and free the given element using the function ’del’ and free(3)
		curr = next; // Set curr to next
	}
	*lst = NULL; // Set lst to NULL
}
