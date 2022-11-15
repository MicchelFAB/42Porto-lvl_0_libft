/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:59:43 by mamaral-          #+#    #+#             */
/*   Updated: 2022/11/15 14:53:18 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include <stdlib.h>
#include "string.h"
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

char	*ft_strdup(const char *s)
{
	char	*src;
	int		i;

	i = 0;
	src = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!src)
		return (NULL);
	while (*s)
		src[i++] = *s++;
	src[i] = '\0';
	return (src);
}

int	main(int ac, char **av)
{
	char	*mine;
	char	*theirs;

	if (ac == 2)
	{
		mine = ft_strdup(av[1]);
		theirs = strdup(av[1]);
		printf(":%s:\n:%s:\n", mine, theirs);
	}
	return (0);
}
