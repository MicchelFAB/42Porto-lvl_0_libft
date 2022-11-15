/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:57:00 by mamaral-          #+#    #+#             */
/*   Updated: 2022/11/09 11:57:47 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (src == 0)
		return (0);
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
						dst[i] = src[i];
						i++;
		}
				dst[i] = '\0';
	}
	return (ft_strlen(src));
}
