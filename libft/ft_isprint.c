/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:26:45 by lvecchia          #+#    #+#             */
/*   Updated: 2023/05/04 08:26:06 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
int	main(void)
{
	char 	c;
	int	d;

	c = '%';
	d = (int)c;		
	printf("FT_ISPRINT: Char: %c | Ascii: %d 
		| result: %d \n", c, d, ft_isprint(d));
	c = '\t';
	d = (int)c;
	printf("FT_ISPRINT: Char: %c | Ascii: %d 
		| result: %d \n \n", c, d, ft_isprint(d));
	return (0);
}
*/
/*
The isprint() function tests for any printing character, 
including space (‘ ’).  
The value of the argument must be representable as an 
unsigned char or the value of EOF. 
The isprint() function returns zero if the character 
tests false and returns non-zero 
if the character tests true.
*/
