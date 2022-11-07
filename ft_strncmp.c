/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 23:01:13 by mamaral-          #+#    #+#             */
/*   Updated: 2022/11/07 15:20:01 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		s1++;
		s2++;
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include "string.h"

int		main(void)
{
	char	*s1, *s2;

	s1 = "Oratoroeuaroupa";
	s2 = "Oratoarouparoeu";
	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("%d\n", ft_strncmp(s1, s2, 8));
	printf("%d\n", strncmp(s1, s2, 4));
	printf("%d\n", strncmp(s1, s2, 8));
}
*/