/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:46:29 by mamaral-          #+#    #+#             */
/*   Updated: 2022/11/15 18:10:22 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*c;

	i = 0;
	if (!s)
		return (NULL);
	c = ft_strnew(len);
	if (!c)
		return (NULL);
	if (s)
	{
		while (i != len)
		{
			c[i] = s[start + i];
			i++;
		}
	}
	c[len] = '\0';
	return (c);
}
