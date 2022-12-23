/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:56:32 by mamaral-          #+#    #+#             */
/*   Updated: 2022/12/23 16:25:48 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Function: ft_isdigit
int	ft_isdigit(int c) // Check if c is a digit
{
	if (c >= '0' && c <= '9') // If c is between 0 and 9
		return (1); // Return 1
	return (0); // Else return 0
}
