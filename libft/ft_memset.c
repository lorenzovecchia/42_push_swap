/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:13:56 by lvecchia          #+#    #+#             */
/*   Updated: 2023/05/04 10:23:01 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)str + i) = c;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char str1[30] = "Test my function!";
	printf("FT_MEMSET: Before: %s\n", str1);
	ft_memset(str1, '#', 4);
	printf("FT_MEMSET: After: %s\n\n", str1);
	return (0);
}
*/
/*
The memset() function writes len bytes of value c
 (converted to an unsigned char) to the string b.
*/
