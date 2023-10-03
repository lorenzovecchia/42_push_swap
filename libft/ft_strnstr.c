/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:24:01 by lvecchia          #+#    #+#             */
/*   Updated: 2023/05/31 19:51:26 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	value;
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	value = len;
	if (len > ft_strlen(haystack))
		value = ft_strlen(haystack);
	while ((i + ft_strlen(needle)) <= value)
	{
		c = 0;
		while (haystack[i + c] == needle[c] && needle[c])
			c++;
		if (!needle[c] && haystack[i + c -1] == needle[c -1])
			return (&((char *)haystack)[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
 {
	const char *haystack = "testing my function";
	const char *needle = "testing my function";
	size_t len = sizeof(haystack);
	char *result = ft_strnstr(haystack, needle, len);

	if (result != NULL)
		printf("Subcadena encontrada: %s\n", result);
	else
		printf("Subcadena no encontrada.\n");

	return 0;
}
*/
/*
The strnstr() function locates the first occurrence of the null-
terminated string needle in the string haystack, where not more 
than len characters are searched. 
Characters that appear after a ‘\0’ character are not searched.  
Since the strnstr() function is a FreeBSD specific API, 
it should only be used when portability is not a concern.
*/