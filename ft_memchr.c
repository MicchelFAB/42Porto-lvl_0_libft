/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:31:26 by mamaral-          #+#    #+#             */
/*   Updated: 2022/12/23 17:29:04 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Function: ft_memchr
void	*ft_memchr(const void *s, int c, size_t n) // Locates the first occurrence of c (converted to an unsigned char) in string s.
{
	unsigned char	*str; // Create unsigned char pointer str
	size_t			i; // Create size_t i

	str = (unsigned char *)s; // Set str to s
	i = 0; // Set i to 0
	while (n > i) // While n is greater than i
	{
		if (str[i] == (unsigned char)c) // If str[i] is equal to c
			return (&str[i]); // Return str[i]
		i++; // Increment i
	}
	return (NULL); // Return NULL
}
