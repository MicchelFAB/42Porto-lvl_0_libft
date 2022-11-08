/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:10:28 by mamaral-          #+#    #+#             */
/*   Updated: 2022/11/08 17:20:49 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"
#include <string.h>

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}

int	main(void)
{
	char	*src;
	char	*dest;

	src = "5M6C>6C!C7i3C&^_SOF2*!a";
	dest = strdup("Amarelo Azuli");
	printf ("Before memset => %s", dest);
	ft_memcpy (dest, src, 8);
	printf ("\nAfter memset => %s\n", dest);
	return (0);
}
