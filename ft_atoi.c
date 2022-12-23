/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:52:35 by mamaral-          #+#    #+#             */
/*   Updated: 2022/12/23 16:15:01 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Function: ft_atoi
int	ft_atoi(const char *nptr) // Convert string to int
{
	int	res; // Result
	int	sinal; // Signal

	res = 0; // Set result to 0
	sinal = 1; // Set signal to 1
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13)) // While space or tab or newline or vertical tab or form feed or carriage return
		nptr++; // Increment pointer
	if (*nptr == '-') // If pointer is '-'
		sinal *= -1; // Set signal to -1
	if (*nptr == '-' || *nptr == '+') // If pointer is '-' or '+'
		nptr++; // Increment pointer
	while (*nptr >= '0' && *nptr <= '9') // While pointer is a number
	{
		res = res * 10 + *nptr - '0'; // Set result to result * 10 + pointer - '0'
		nptr++; // Increment pointer
	}
	return (res * sinal); // Return result * signal
}
