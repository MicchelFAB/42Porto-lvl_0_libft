/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrpf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:49:24 by mamaral-          #+#    #+#             */
/*   Updated: 2023/01/17 16:54:32 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstrpf(char *s)
{
	int		i;

	i = 0;
	if (!s)
		return (ft_putstrpf("(null)"));
	if (s)
		while (*s)
			i += ft_putcharpf(*s++);
	return (i);
}
