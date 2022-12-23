/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:21:55 by mamaral-          #+#    #+#             */
/*   Updated: 2022/12/23 16:26:06 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Function: ft_isalpha
int	ft_isalpha(int c) // Check if c is a letter
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) // If c is between A and Z or a and z
		return (1); // Return 1
	return (0); // Else return 0
}
