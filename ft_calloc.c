/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:47:20 by mamaral-          #+#    #+#             */
/*   Updated: 2022/12/23 16:22:33 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Function: ft_calloc
void	*ft_calloc(size_t nmemb, size_t size) // Allocate memory for nmemb * size bytes and set to 0
{
	char	*ptr; // Pointer to allocated memory
	size_t	i; // Counter

	i = 0; // Set counter to 0
	ptr = malloc(nmemb * size); // Allocate memory for nmemb * size bytes
	if (ptr == NULL) // If malloc fails
		return (0); // Return 0
	while (i < nmemb * size) // While counter is less than nmemb * size
	{
		ptr[i] = 0; // Set pointer to 0
		i++; // Increment counter
	}
	return (ptr); // Return pointer
}
