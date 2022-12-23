/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:36:51 by mamaral-          #+#    #+#             */
/*   Updated: 2022/12/23 16:23:03 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Function: ft_isalnum
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c)) // If c is a letter or a digit
		return (1); // Return 1
	return (0); // Else return 0
}
