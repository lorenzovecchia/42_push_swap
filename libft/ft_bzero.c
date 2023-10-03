/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:23:50 by lvecchia          #+#    #+#             */
/*   Updated: 2023/05/04 10:38:23 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_bzero(void *str, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)str + i) = 0;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char str2[30] = "Test my function!";
	printf("FT_BZERO: Before: %s\n", str2);
	ft_bzero(str2, 4);
	printf("FT_BZERO: After: %s\n\n", str2);
	return (0);
}
*/
/*
The bzero() function writes n zeroed
bytes to the string s.  
If n is zero, bzero() does nothing.
*/
