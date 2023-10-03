/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:19:01 by lvecchia          #+#    #+#             */
/*   Updated: 2023/05/30 19:22:26 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
			i++;
		else
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	}
	return (0);
}
/*
int	main(void)
{
	char str_src[20] = "Testing FT_memcmp!";
	char str_dst[17] = "Testing memcmp!";
	printf("FT_MEMCMP: el resultado es: %d\n", 
	ft_memcmp(str_dst, str_src, 20));
	return(0);
}
*/
/*
The memcmp() function returns zero if the two strings are identical,
otherwise returns the difference between the first two differing bytes
(treated as unsigned char values, so that ‘\200’ is greater than ‘\0’,
for example).  Zero-length strings are always identical.  This behavior
is not required by C and portable code should only depend on the sign of
the returned value.
*/
