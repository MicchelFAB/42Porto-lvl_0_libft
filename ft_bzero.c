/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:02:10 by mamaral-          #+#    #+#             */
/*   Updated: 2022/11/22 15:21:11 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  Configura os primeiros n bytes da área de bytes começando em s a zero
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
