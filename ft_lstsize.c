/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:39:02 by mamaral-          #+#    #+#             */
/*   Updated: 2022/12/23 17:28:17 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Function: ft_lstsize
int	ft_lstsize(t_list *lst) // Counts the number of elements in a list.
{
	int	size; // Create int size

	size = 0; // Set size to 0
	while (lst != NULL) // While lst is not NULL
	{
		lst = lst->next; // Set lst to lst->next
		size++; // Increment size
	}
	return (size); // Return size
}
