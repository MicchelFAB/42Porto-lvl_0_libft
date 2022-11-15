/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:10:28 by mamaral-          #+#    #+#             */
/*   Updated: 2022/11/15 10:57:39 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"
#include <bsd/string.h>

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}

int	main(void)
{
	char	*src;
	char	*dest;

	src = "5M6C>6C!C7i3C&^_SOF2*!a";
	dest = strdup("Amarelo Azuli");
	printf ("STRCHR %s\n", ft_strchr(dest, ' '));
	return (0);
}

/*
int	main(void)
{
	char	dest[50];
	char	*src;
	int		size;

	src = "ceci et un test tu voissss";
	size = 10;
	printf("%lu\n", ft_strlcat(dest, src, size));
	printf(".%s.\n\n", dest);
}
*/