/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:10:28 by mamaral-          #+#    #+#             */
/*   Updated: 2022/11/07 14:28:14 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);

int	main(void)
{
	char	*char_input;
	char	char_outputa[20];
	char	char_outputd[20];
	char	char_outputb[20];
	char	char_outputc[20];
	int	i, j, k, l, m = 0;

	char_input = "5M6þ6Ç!Ö7i3C&^\%_SOF2*!a";
	while (char_input[i] != '\0')
	{
		if (ft_isalpha(char_input[i]))
		{
			char_outputa[j] = char_input[i];
			j++;
		}
		if (ft_isdigit(char_input[i]))
		{
			char_outputd[k] = char_input[i];
			k++;
		}
		if (ft_isalnum(char_input[i]))
		{
			char_outputb[l] = char_input[i];
			l++;
		}
		if (ft_isascii(char_input[i]))
		{
			char_outputc[j] = char_input[i];
			m++;
		}
	i++;
	}
	char_input[i] = '\0';
	char_outputa[j] = '\0';
	char_outputd[k] = '\0';
	char_outputb[l] = '\0';
	char_outputc[m] = '\0';
	printf("Original = %s\n", char_input);
	printf("char_isalpha = %s\n", char_outputa);
	printf("char_isalnum = %s\n", char_outputb);
	printf("char_isascii = %s\n", char_outputc);
	printf("char_isdigit = %s\n", char_outputd);
	return (0);
}
