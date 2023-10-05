/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:42:49 by lvecchia          #+#    #+#             */
/*   Updated: 2023/10/05 12:46:07 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	push_swap(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = start_stack_a(argv); //init_list
	stack_b = NULL;
	if (is_ordered(stack_a))
	{
		write(1, "\nAlready ordered!!\n", 22);
		return (0);
	}
	else
		range(stack_a, stack_b, argc); //ft_pivot
	return (0);
}

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
