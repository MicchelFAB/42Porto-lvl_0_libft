/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:38:57 by mamaral-          #+#    #+#             */
/*   Updated: 2022/12/23 17:26:58 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Function: ft_lstmap
t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*)) // Iterates the list lst and applies the function f to the content of each element. Creates a new list resulting of the successive applications of the function f. The del function is used to delete the content of an element if needed.
{
	t_list	*new; // New list
	t_list	*result; // Result list
	void	*temp; // Temp variable

	if (lst == NULL) // If lst is NULL
		return (0); // Return NULL
	result = 0; // Set result to NULL
	while (lst != NULL) // While lst is not NULL
	{
		temp = f(lst->content); // Set temp to the result of f(lst->content)
		new = ft_lstnew(temp); // Set new to a new list with temp as content
		if (new == NULL) // If new is NULL
		{
			ft_lstclear(&result, del); // Clear result
			return (0); // Return NULL
		}
		ft_lstadd_back(&result, new); // Add new to the end of result
		lst = lst->next; // Set lst to lst->next
	}
	new = 0; // Set new to NULL
	return (result); // Return result
}
