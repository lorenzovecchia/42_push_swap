/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:46:59 by lvecchia          #+#    #+#             */
/*   Updated: 2023/06/13 18:21:10 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*	
int	main(void)
{
	char 	c;
	int	d;

	c = 's';
	d = (int)c;	
	printf("FT_ISALPHA: CHar: %c | Ascii: %d 
		| result %d\n", c, d, ft_isalpha(d));
	c = '!';
	d = (int)c;	
	printf("FT_ISALPHA: Char: %c | Ascii: %d 
		| result:  %d\n \n", c, d, ft_isalpha(d));
	return (0);
}
*/

/*
In C isalpha() function checks whether a character 
is an alphabet (a to z and A-Z) or not.
If a character passed to isalpha() is an alphabet, 
it returns a non-zero integer, if not it returns 0.
*/
