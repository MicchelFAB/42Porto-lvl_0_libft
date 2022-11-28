/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:44:23 by mamaral-          #+#    #+#             */
/*   Updated: 2022/11/28 19:05:22 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//discover the size of the string	-	LN 23 //
//create int variable				-	LN 25 //
//define len as 0					-	LN 27 //
//if nb is negative or 0			-	LN 28 //
//increase len by 1					-	LN 29 //
//while nb is not 0					-	LN 30 //
//increase len by 1					-	LN 32 //
//divide nb by 10					-	LN 33 //
//return len						-	LN 35 //
size_t	ft_nb_len(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}
//create ft_itoa function						-	LN 59 //
//create int variable							-	LN 61 //
//create char variable							-	LN 62 //
//create long variable							-	LN 63 //
//define len as ft_nb_len(n)					-	LN 65 //
//define nb as n								-	LN 66 //
//define str as malloc							-	LN 66 //
//malloc len + 1								-	LN 67 //
//if str is NULL								-	LN 68 //
//return NULL									-	LN 69 //	
//if nb is negative								-	LN 70 //
//define str as '-'								-	LN 72 //
//define nb as -nb								-	LN 73 //
//if nb is 0									-	LN 75 //
//define str as '0'								-	LN 76 //
//define decrement of len ponter str as '\0'	-	LN 77 //	
//while nb is not 0								-	LN 78 //
//define str len as nb % 10 + '0'				-	LN 80 //
//decresase len by 1							-	LN 81 //
//divide nb by 10								-	LN 82 //
//return str									-	LN 84 //

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nb;

	len = ft_nb_len(n);
	nb = n;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nb)
	{
		str[len] = nb % 10 + '0';
		len--;
		nb = nb / 10;
	}
	return (str);
}
