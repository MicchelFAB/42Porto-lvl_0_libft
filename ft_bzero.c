/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:02:10 by mamaral-          #+#    #+#             */
/*   Updated: 2022/11/28 18:00:16 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//create ft_bzero function									-	LN 16 //
//define ft_memset function with NULL character as value	-	LN 18 //
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
