/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:39:18 by lvecchia          #+#    #+#             */
/*   Updated: 2023/05/10 14:04:19 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst2;
	unsigned char	*src2;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst2 = (unsigned char *) dst;
	src2 = (unsigned char *) src;
	if (dst2 > src2)
	{
		while (len != 0)
		{
			len--;
			dst2[len] = src2[len];
		}
	}
	else
		ft_memcpy(dst2, src2, len);
	return (dst);
}

/*
int main(void)
{
	char str_src2[30] = "Test test!";
	char str_dst2[30] = "With this!";
	printf("FT_MEMMOVE: Before:\n %s\n %s \n", str_src2, str_dst2);
	ft_memmove(str_dst2, str_src2, 11);
	printf("FT_MEMMOVE: After:\n %s\n %s \n", str_src2, str_dst2);
	return(0);
}

*/
/*
The memmove() function copies len bytes from string src to string dst. 
The two strings may overlap; the copy is always done in a non-destructive manner.
The memmove() function returns the original value of dst.
*/
