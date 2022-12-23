/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:26:00 by mamaral-          #+#    #+#             */
/*   Updated: 2022/12/23 16:25:42 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Function: ft_isprint
int	ft_isprint(int c) // Check if c is a printable character
{
	if (c >= 32 && c <= 126) // If c is between 32 and 126 (space and ~)
		return (1); // Return 1
	return (0);	// Else return 0
}
