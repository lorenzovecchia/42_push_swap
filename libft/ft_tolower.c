/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:10:19 by lvecchia          #+#    #+#             */
/*   Updated: 2023/05/26 14:10:45 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
int	main(void)
{
	c = 73;
	printf("FT_TOLOWER: Before: %d", c);
	ft_tolower(c);
	printf("FT_TOLOWER: After: %d", c);
	return(0);
}
{
	The tolower() function converts a lower-case letter 
	to the corresponding upper-case letter.  
	The argument must be representable as an unsigned char 
	or the value of EOF.;
}
*/
