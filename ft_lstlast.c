/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:38:53 by mamaral-          #+#    #+#             */
/*   Updated: 2022/12/23 17:25:45 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Function: ft_lstlast
t_list	*ft_lstlast(t_list *lst) // Returns the last element of the list.
{
	if (lst == NULL) // If lst is NULL
		return (NULL); // Return NULL
	while (lst->next != NULL) // While lst->next is not NULL
		lst = lst->next; // Set lst to lst->next
	return (lst); // Return lst
}
