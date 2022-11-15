/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main-memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:10:28 by mamaral-          #+#    #+#             */
/*   Updated: 2022/11/08 13:40:15 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		p[n - 1] = c;
		n--;
	}
	return (s);
}

int	main(void)
{
	char	*str;

	str = strdup("5M6þ6Ç!Ö7i3C&^_SOF2*!a");
	printf("Before memset => %s", str);
	ft_memset(str + 6, 'x', 10);
	printf("\nAfter memset => %s\n", str);
	return (0);
}
