/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:31:19 by mamaral-          #+#    #+#             */
/*   Updated: 2022/11/17 09:06:44 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		d;
	size_t		s;
	size_t		i;

	if (!size)
		return (ft_strlen(dst) + size);
	s = ft_strlen(src);
	i = 0;
	while (dst[i] && i < size)
		i++;
	d = i;
	while (src[i - d] && i < size - 1)
	{
		dst[i] = src[i - d];
		i++;
	}
	if (d < size)
		dst[i] = '\0';
	return (d + s);
}
