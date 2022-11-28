/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:52:35 by mamaral-          #+#    #+#             */
/*   Updated: 2022/11/28 19:28:53 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//create ft_atoi function							-	LN 28 //
//declare variables									-	LN 30 //
//set variables										-	LN 33 //
//check if nptr is valid							-	LN 35 //
//delimitate spaces, tabs and new lines				-	LN 37 //
//increment pointer									-	LN 38 //
//check if string has a sign negative				-	LN 39 //
// set sign to positive								-	LN 40 //
//check if string has a sign positive or negative	-	LN 41 //
//increment pointer									-	LN 42 //
//check if string has a number						-	LN 43 //
//set result to the number							-	LN 45 //
//increment pointer									-	LN 46 //
//return result										-	LN 48 //
int	ft_atoi(const char *nptr)
{
	int	res;
	int	sinal;

	res = 0;
	sinal = 1;
	if (!nptr)
		return (0);
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-')
		sinal *= -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + *nptr - '0';
		nptr++;
	}
	return (res * sinal);
}
