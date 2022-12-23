/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:02:10 by mamaral-          #+#    #+#             */
/*   Updated: 2022/12/23 16:19:20 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//function: ft_bzero
void	ft_bzero(void *s, size_t n) // Set n bytes of s to 0
{
	ft_memset(s, '\0', n); // Use ft_memset to set n bytes of s to 0
}
