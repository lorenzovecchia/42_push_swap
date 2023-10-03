/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:35:25 by lvecchia          #+#    #+#             */
/*   Updated: 2023/05/26 11:05:16 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	srcsize;

	i = 0;
	srcsize = 0;
	while (src[srcsize] != '\0')
		srcsize++;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
/*
int	main(void)
{
	char str_src3[30] = "Testing FT_strlcpy!";
	char str_dst3[30] = "Copy goes here";
	printf("FT_STRLCPY: Before: \n %s\n %s \n\n", str_src3, str_dst3);
	ft_strlcpy(str_dst3, str_src3, 12);
	printf("FT_STRLCPY: After: \n %s \n %s \n\n", str_src3, str_dst3);
	return(0);
}
*/
/*
The strlcpy() and strlcat() functions copy and concatenate strings 
with the same input parameters and output result as snprintf(3).  
They are designed to be safer, more consistent, and less error 
prone replacements for the easily misused functions strncpy(3) and strncat(3).
strlcpy() and strlcat() take the full size of the destination buffer 
and guarantee NUL-termination if there is room.  
Note that room for the NUL should be included in dstsize.
strlcpy() copies up to dstsize - 1 characters from the string src to dst, 
NUL-terminating the result if dstsize is not 0.
*/