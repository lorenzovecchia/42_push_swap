/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:31:25 by lvecchia          #+#    #+#             */
/*   Updated: 2023/05/12 12:31:34 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*int	main(void)
{
	char 	c;
	int	d;
	
	c = 'L';
	d = (int)c;		
	printf("FT_ISALNUM: Char: %c | Ascii: %d 
		| result: %d \n", c, d, ft_isalnum(d));
	c = '?';
	d = (int)c;
	printf("FT_ISALNUM: Char: %c | Ascii: %d 
		| result: %d \n \n", c, d, ft_isalnum(d));
	return (0);
}
*/
/*
 The isalnum() function returns zero if 
 the character tests false and returns non-zero 
 if the character tests true.
ASCII dec. 48-57 65-90 97-122
*/
