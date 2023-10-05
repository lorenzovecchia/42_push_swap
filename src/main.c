/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:21:34 by lvecchia          #+#    #+#             */
/*   Updated: 2023/10/05 11:26:54 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int main (int argc, char **argv)
{
	if (argc > 1)
	{
		if (argc == 2)
		{
			arg_split(argc, argv);
			return (0);
		}
		else
		{
			if (validate_args(argc, argv))
				return (1);
			push_swap(argc - 1, argv + 1);
		}
	}
	return (0);
}
/*
{
	if (argc > 1)
	{
		if (argc > 2)
		{
			if (validate_args(argc, argv))
				return (1);
			push_swap(argc - 1, argv + 1);		
		}
		else
		{
			arg_split(argc, argv);
			return (0);
		}
	}
	return (0);
}*/