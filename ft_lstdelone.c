/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:38:41 by mamaral-          #+#    #+#             */
/*   Updated: 2022/12/23 17:23:19 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Function: ft_lstdelone
void	ft_lstdelone(t_list *lst, void (*del)(void*)) // Delete and free the given element and every successor of that element, using the function ’del’ and free(3)
{
	if (lst == NULL) // If lst is NULL
		return ; // Return
	del(lst->content); // Delete and free the given element using the function ’del’ and free(3)
	free(lst); // Free lst
}
