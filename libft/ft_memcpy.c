/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:39:18 by lvecchia          #+#    #+#             */
/*   Updated: 2023/05/10 14:05:20 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*src2;
	char		*dst2;

	if (dst == src || !n)
		return (dst);
	if (dst == NULL && src == NULL)
		return (NULL);
	src2 = (char *)src;
	dst2 = (char *)dst;
	i = 0;
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}
/*
int main(void)
{
	char str_src[6] = "Test!";
	char str_dst[14] = "With this!";
	printf("FT_MEMCPY: Before:\n %s\n %s \n", str_src, str_dst);
	ft_memcpy(str_dst, str_src, 11);
	printf("FT_MEMCPY: After:\n %s\n %s \n\n", str_src, str_dst);
	return(0);
}
*/
/*
The memcpy() function copies n bytes from memory area src to memory area dst.  
If dst and src overlap, behavior is undefined.  
Applications in which dst and src might overlap should use memmove(3) instead. 
The memcpy() function returns the original value of dst.
*/
