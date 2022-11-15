/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaral- <mamaral-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:59:43 by mamaral-          #+#    #+#             */
/*   Updated: 2022/11/15 12:09:33 by mamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include <stdlib.h>
#include "time.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (0);
	while (i < count * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

int	main(void)
{
	int	size = 0;
	int	*junk;
	srand( time(0));
	
	for (int i = 0; i < 100000; i++)
	{
		size = rand() % 16000;
		junk = malloc( size * sizeof(int));
		for ( int j = 0; j< size; j++)
		{
			junk[j] = rand();
		}
		free(junk);
	}

	clock_t tic, toc;
	int *array;

	/*array = malloc( 10000 * sizeof(int ));
	for (int i = 0; i < 10000; i++)
		printf("%d", array[i]);
	free(array);

	printf("\n");
	*/
	tic = clock();
	array = malloc( 1000000 * sizeof(int));
	toc = clock();
	printf("malloc: %fs\n", (double) (toc - tic) / CLOCKS_PER_SEC );
	free(array);

	/*array = ft_calloc( 10000, sizeof(int ));
	for (int k = 0; k < 10000; k++)
		printf("%d", array[k]);
	free(array);
*/
	tic = clock();
	array = ft_calloc( 1000000, sizeof(int));
	toc = clock();
	printf("ft_calloc: %fs\n", (double) (toc - tic) / CLOCKS_PER_SEC );
	free(array);

	tic = clock();
	array = calloc( 1000000, sizeof(int));
	toc = clock();
	printf("calloc: %fs\n", (double) (toc - tic) / CLOCKS_PER_SEC );
	free(array);	

/*

	int size = 0;
	int *junk;
	srand( time(0));
	
	for (int i = 0; i < 1000; i++)
	{
		size = rand() % 16000;
		junk = malloc( size * sizeof(int));
		for ( int j = 0; j< size; j++)
		{
			junk[j] = rand();
		}
		free(junk);
	}

	int *array;
	array = malloc( 1000 * sizeof(int ));
	for (int i = 0; i < 1000; i++)
		printf("%d", array[i]);
	free(array);

	printf("\n");
	
	int *arraz;
	arraz = calloc( 1000, sizeof(int ));
	for (int k = 0; k < 1000; k++)
		printf("%d", arraz[k]);
	free(array);

	printf("\n");
*/	
	return(0);
}