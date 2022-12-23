/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:35:18 by mamaral-          #+#    #+#             */
/*   Updated: 2022/12/23 17:30:12 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Function: ft_memcmp
int	ft_memcmp(const void *s1, const void *s2, size_t n) // Compares byte string s1 against byte string s2. Both strings are assumed to be n bytes long.
{
	size_t			i; // Create size_t i
	unsigned char	*str1; // Create unsigned char pointer str1
	unsigned char	*str2; // Create unsigned char pointer str2

	str1 = (unsigned char *)s1; // Set str1 to s1
	str2 = (unsigned char *)s2; // Set str2 to s2
	i = 0; // Set i to 0
	while (i < n) // While i is less than n
	{
		if (str1[i] != str2[i]) // If str1[i] is not equal to str2[i]
		{
			return (str1[i] - str2[i]); // Return str1[i] - str2[i]
		}
		i++; // Increment i
	}
	return (0); // Return 0
}
