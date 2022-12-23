/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:38:46 by mamaral-          #+#    #+#             */
/*   Updated: 2022/12/23 17:23:52 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Function: ft_lstiter
void	ft_lstiter(t_list *lst, void (*f)(void*)) // Iterates the list ’lst’ and applies the function ’f’ to the content of each element.
{
	if (lst == NULL || f == NULL) // If lst or f are NULL
		return ; // Return
	while (lst) // While lst is not NULL
	{
		f(lst->content); // Apply the function ’f’ to the content of each element
		lst = lst->next; // Set lst to lst->next
	}
}
