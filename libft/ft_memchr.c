/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 10:08:01 by lvecchia          #+#    #+#             */
/*   Updated: 2023/05/30 13:56:26 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (&((unsigned char *)s)[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char str[20] = "Testing FT_memchr!";
	int	c = 'F';
	size_t len = sizeof(str);
	void *result = ft_memchr(str, c, len);

	if (result != 0)
		printf("Carácter encontrado: %c\n", *(char *)result);
	else
		printf("Carácter no encontrado.\n");

	return 0;
}
*/
/*
The memchr() function locates the first occurrence 
of c (converted to ancunsigned char) in string s.
The memchr() function returns a pointer to the byte 
located, or NULL if no such byte exists within n bytes.
*/
