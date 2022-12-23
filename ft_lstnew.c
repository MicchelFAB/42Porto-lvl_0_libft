/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:37:36 by mamaral-          #+#    #+#             */
/*   Updated: 2022/12/23 17:28:00 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Function: ft_lstnew
t_list	*ft_lstnew(void *content) // Allocates and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.
{
	t_list	*new; // Create new element

	new = (t_list *)malloc(sizeof(t_list)); // Allocate memory for new element
	if (!(new)) // If new is NULL
	{
		return (NULL); // Return NULL
	}
	new->next = NULL; // Set new->next to NULL
	new->content = content; // Set new->content to content
	return (new); // Return new
}	
