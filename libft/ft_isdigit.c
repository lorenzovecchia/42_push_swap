/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:59:05 by lvecchia          #+#    #+#             */
/*   Updated: 2023/05/04 08:25:43 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	char 	c;
	int	d;

	c = 'x';
	d = (int)c;	
	printf("FT_ISDIGIT: CHar: %c | Ascii: %d 
		| result: %d\n", c, d, ft_isdigit(d));
	c = '3';
	d = (int)c;	
	printf("FT_ISDIGIT: Char: %c | Ascii: %d 
		| result:  %d\n \n", c, d, ft_isdigit(d));
	return (0);
}
*/
/*
The isdigit() function checks whether a character 
is numeric character (0-9) or not. 
Internally, the character is converted to its 
ASCII value for the check. 
The function return zero if the character tests false 
and return non-zero if the character tests true.
*/
