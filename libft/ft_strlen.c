/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 08:29:23 by lvecchia          #+#    #+#             */
/*   Updated: 2023/05/04 09:10:31 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int main(void)
{	
	char	string[15] = "12345678";
	
	printf("FT_STRLEN: String: %s | Lenght: %d \n", string, ft_strlen(string));
	char string2[15] = "test string";
	printf("FT_STRLEN: String: %s | Lenght: %d \n\n", string2, ft_strlen(string2));
	return (0);
}
*/
/*
The strlen() function computes the length of the string s. 
*/
