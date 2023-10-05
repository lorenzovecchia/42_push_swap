/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:54:39 by lvecchia          #+#    #+#             */
/*   Updated: 2023/10/05 12:12:41 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

//SPLIT

int	arg_split(int argc, char **argv)
{
	char	**split_all;
	int		i;

	split_all = ft_split(argv[1], ' ');
	i = 0;
	while (split_all[i])
		i++;
	if (i > 1)
	{
		if (validate_args(argc, split_all))
			return (1);
		push_swap(i, split_all);
	}
	return (0);
}

//CHECKS

int contains_digits(char *str) {
    while (*str) {
        if (*str >= '0' && *str <= '9') {
            return 1; 
        }
        str++;
    }
    return 0; 
}


int	check_digits(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (contains_digits(argv[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

int	check_duplicate(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < argc)
	{
		while (j < (argc - 1))
		{
			if (ft_strncmp(argv[i], argv[j + 1], INT_MAX) == 0)
				return (1);
			j++;
		}
		i++;
		j = i;
	}
	return (0);
}

int	check_range(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_atoi(argv[i]) > INT_MAX || ft_atoi(argv[i]) < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int	validate_args(int argc, char **argv)
{
	if (check_digits(argc, argv) == 1)
	{
		write (1, "error\n", 6);
		return (1);
	}
	if (check_range(argc, argv) == 1)
	{
		write (1, "error\n", 6);
		return (1);
	}
	if (check_duplicate(argc, argv) == 1)
	{
		write (1, "error\n", 6);
		return (1);
	}
	return (0);
}




