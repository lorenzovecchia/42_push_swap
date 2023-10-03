/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:38:01 by lvecchia          #+#    #+#             */
/*   Updated: 2023/05/30 18:22:26 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while ((unsigned char)*s1 == (unsigned char)*s2 && *s1 != '\0' && n - 1 > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
int	main(void)
{
	char str_src[20] = "Testing FT_strncmp!";
	char str_dst[20] = "Testing strncmp!";
	printf("FT_STRCMP: el resultado es: %d\n", 
	ft_strncmp(str_dst, str_src, 12));
	return(0);
}
*/

/*
The strncmp() function compares not more than n characters.  Because
strncmp() is designed for comparing strings rather than binary data,
characters that appear after a ‘\0’ character are not compared.
*/
