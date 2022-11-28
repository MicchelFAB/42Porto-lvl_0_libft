/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:52:35 by mamaral-          #+#    #+#             */
/*   Updated: 2022/11/28 17:14:15 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)				//create ft_atoi function
{
	int	res;						//declare variables
	int	sinal;

	res = 0;						//set variables
	sinal = 1;
	if (!nptr)						//check if nptr is valid
		return (0);
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))	//delimitate spaces, tabs and new lines
		nptr++;					//increment pointer
	if (*nptr == '-')					//check if string has a sign negative
		sinal *= -1;					// set sign to positive
	if (*nptr == '-' || *nptr == '+')			//check if string has a sign
		nptr++;					//increment pointer
	while (*nptr >= '0' && *nptr <= '9')			//check if string has a number
	{
		res = res * 10 + *nptr - '0';			//set result to the number
		nptr++;					//increment pointer
	}
	return (res * sinal);					//return result
}
