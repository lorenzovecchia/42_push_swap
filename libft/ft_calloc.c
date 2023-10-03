/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:24:01 by lvecchia          #+#    #+#             */
/*   Updated: 2023/06/05 12:51:26 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*bzero;

	bzero = (void *)malloc(count * size);
	if (!bzero)
		return (0);
	ft_bzero (bzero, count * size);
	return (bzero);
}	
/*
int main(void)
{
	int count = 12;
	int	size = 4;
	int	i = 0;
	void *ptr = ft_calloc(count, size);
	unsigned char *mem = (unsigned char *)ptr;

	printf("La direccion del puntero es %p\n", ptr);
	printf("El contenido de memorias es: \n");
	while ( i < (count * size))
	{
		printf("%02x ", mem[i]);
		if ((i++ + 1) % size == 0)
			printf("\n");
	}
	return(0);
}
*/
/*
The calloc() function contiguously allocates enough space for count
objects that are size bytes of memory each and returns a pointer to the
allocated memory.  The allocated memory is filled with bytes of value
zero.
If successful, calloc() function return a pointer to allocated memory.  If there
is an error, they return a NULL pointer and set errno to ENOMEM.
*/
