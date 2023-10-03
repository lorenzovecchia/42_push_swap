/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:23:53 by lvecchia          #+#    #+#             */
/*   Updated: 2023/05/04 08:25:20 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char 	c;
	int		d;
	
	c = '@';
	d = (int)c;		
	printf("FT_ISASCII: Char: %c | Ascii: %d 
		| result: %d \n", c, d, ft_isascii(d));
	c = '.';
	d = (int)c;
	printf("FT_ISASCII: Char: %c | Ascii: %d 
		| result: %d \n \n", c, d, ft_isascii(d));
	return (0);
}
*/
/*
The isascii() function tests for an ASCII character, 
which is any character between 0 
and octal 0177 inclusive. 
Nonzero if c is an ASCII character; otherwise, zero.
*/