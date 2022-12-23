/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:58:59 by mamaral-          #+#    #+#             */
/*   Updated: 2022/12/23 16:25:58 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Function: ft_isascii
int	ft_isascii(int c) // Check if c is an ASCII character
{
	if (c >= 0 && c <= 127) // If c is between 0 and 127
		return (1); // Return 1
	return (0); // Else return 0
}
