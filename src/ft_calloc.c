/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:47:20 by mamaral-          #+#    #+#             */
/*   Updated: 2024/01/10 13:25:41 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;

	i = -1;
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (0);
	while (++i < nmemb * size)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
