/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptrpf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:49:20 by mamaral-          #+#    #+#             */
/*   Updated: 2023/01/17 13:51:30 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptrpf(unsigned long n)
{
	int	i;

	i = 0;
	if (!n)
		return (ft_putstrpf("(nil)"));
	i += ft_putstrpf("0x");
	i += ft_puthexpf(n, 'x');
	return (i);
}
