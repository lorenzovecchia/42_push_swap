/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:35:59 by lvecchia          #+#    #+#             */
/*   Updated: 2023/05/26 13:50:13 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	length;
	unsigned int	c;
	unsigned int	res_d;
	unsigned int	res_s;

	length = ft_strlen(dst);
	c = 0;
	res_d = ft_strlen(dst);
	res_s = ft_strlen(src);
	if (dstsize < 1)
		return (res_s + dstsize);
	while (src[c] && length < dstsize - 1)
	{
		dst[length] = src[c];
		length++;
		c++;
	}
	dst[length] = '\0';
	if (dstsize < res_d)
		return (res_s + dstsize);
	else
		return (res_d + res_s);
}
/*
int	main(void)
{
	char str_src4[30] = "Testing FT_strlcat!";
	char str_dst4[30] = "Copy goes here";

	printf("FT_STRLCAT: Before: \n %s\n %s \n\n", str_src4, str_dst4);
	ft_strlcat(str_dst3, str_src3, 12);
	printf("FT_STRLCAT: After: \n %s \n %s \n\n", str_src4, str_dst4);
	return(0);
}
*/

/*
The strlcpy() and strlcat() functions copy and concatenate strings 
with the same input parameters 
and output result as snprintf(3).  
They are designed to be safer, more consistent, and less error 
prone replacements for the easily misused functions 
strncpy(3) and strncat(3).
strlcpy() and strlcat() take the full size of the destination 
buffer and guarantee NUL-termination 
if there is room.  Note that room for the 
NUL should be included in dstsize.
strlcpy() copies up to dstsize - 1 characters 
from the string src to dst, NUL-terminating 
the result if dstsize is not 0.

*/
