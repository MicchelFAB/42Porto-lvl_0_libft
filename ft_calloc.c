/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:47:20 by mamaral-          #+#    #+#             */
/*   Updated: 2022/11/28 18:04:13 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//create ft_calloc function		-	LN 24 //
//define char pointer			-	LN 26 //
//define size_t variable		-	LN 27 //
//set i to 0					-	LN 29 //
//set ptr to malloc function	-	LN 30 //
//check if ptr is valid			-	LN 31 //
//loop through ptr				-	LN 33 //
//set ptr to NULL character		-	LN 35 //
//increment i					-	LN 36 //
//return ptr					-	LN 38 //
void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (0);
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
