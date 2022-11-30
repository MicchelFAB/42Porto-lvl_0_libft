/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:38:57 by mamaral-          #+#    #+#             */
/*   Updated: 2022/11/29 11:27:42 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//create lstmap function
//define t_lists pointer
//define temp pointer
//if lst is empty return 0
//define result as 0
//while lst is not empty
//define temp as f(lst->content)
//define new as ft_lstnew(temp)
//if new is empty
//del result
//return 0
//define ft_lstadd_back(result, new)
//define lst as lst->next
//define new as 0
//return result
t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*new;
	t_list	*result;
	void	*temp;

	if (lst == NULL)
		return (0);
	result = 0;
	while (lst != NULL)
	{
		temp = f(lst->content);
		new = ft_lstnew(temp);
		if (new == NULL)
		{
			ft_lstclear(&result, del);
			return (0);
		}
		ft_lstadd_back(&result, new);
		lst = lst->next;
	}
	new = 0;
	return (result);
}
