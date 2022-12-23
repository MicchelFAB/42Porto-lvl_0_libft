/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:44:23 by mamaral-          #+#    #+#             */
/*   Updated: 2022/12/23 16:30:51 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Function: ft_itoa
size_t	ft_nb_len(int nb) // Get the length of the number
{
	int	len; // Init len

	len = 0; // Set len to 0
	if (nb <= 0) // If nb is less than or equal to 0
		len++; // Add 1 to len
	while (nb) // While nb is not 0
	{
		len++; // Add 1 to len
		nb = nb / 10; // Divide nb by 10
	}
	return (len); // Return len
}

char	*ft_itoa(int n) // Convert int to string
{
	int		len; // Init len
	char	*str; // Init str
	long	nb; // Init nb

	len = ft_nb_len(n); // Set len to the length of n
	nb = n; // Set nb to n
	str = malloc(sizeof(char) * len + 1); // Allocate memory for str with len with the size of a char + 1
	if (!str) // If malloc fails
		return (NULL); // Return NULL
	if (nb < 0) // If nb is less than 0
	{
		str[0] = '-'; // Set str point 0 to '-'
		nb = -nb; // Set nb to -nb
	}
	if (nb == 0) // If nb is 0
		str[0] = '0'; // Set str point 0 to '0'
	str[len--] = '\0'; // Set str point len to '\0' and decrement len
	while (nb) // While nb is not 0
	{
		str[len] = nb % 10 + '0'; // Set str point len to nb % 10 + '0'
		len--; // Decrement len
		nb = nb / 10; // Divide nb by 10
	}
	return (str); // Return str
}
