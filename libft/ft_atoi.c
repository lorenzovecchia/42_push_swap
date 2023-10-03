/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:24:01 by lvecchia          #+#    #+#             */
/*   Updated: 2023/05/31 19:51:26 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	long long	value;

	sign = 1;
	value = 0;
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (ft_isdigit(*str))
	{
		value = value * 10 + (*str - '0');
		str++;
	}
	if (sign == -1)
		value *= -1;
	return (value);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main (int ac, char **av)
{
	int mine;
	int orig;
	if (ac == 2)
	{
		mine = ft_atoi(av[1]);
		orig = atoi(av[1]);
		printf("mine: %d | orig: %d\n", mine, orig);
	}
	return(0);
}
*/
/*
The atoi() function converts the initial portion of the string 
pointed to by str to int representation.
*/
