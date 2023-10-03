/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:27:11 by lvecchia          #+#    #+#             */
/*   Updated: 2023/06/13 18:31:43 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	c = 105;
	printf("FT_TOUPPER: Before: %d", c);
	ft_toupper(c);
	printf("FT_TOUPPER: After: %d", c);
	return(0);
}
{
	The toupper() function converts a lower-case letter 
	to the corresponding upper-case letter.  
	The argument must be representable as an unsigned char 
	or the value of EOF.;
}
*/