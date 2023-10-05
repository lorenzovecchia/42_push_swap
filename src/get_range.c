/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:48:21 by lvecchia          #+#    #+#             */
/*   Updated: 2023/10/05 12:49:05 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	range(t_stack *a, t_stack *b, int argc)
{
	if (argc == 2)
	{
		ft_sa(a);
		ft_printstack(a, "AC2\n");
	}
	else if (argc == 3)
	{
		ft_order_3(&a);
		ft_printstack(a, "AC3\n");
	}
	else if (argc == 4)
	{
		ft_order_4(&a, &b);
		ft_printstack(a, "AC4\n");
		ft_printstack(b, "BC4\n");
	}
	else if (argc == 5)
	{
		ft_order_5(&a, &b);
		ft_printstack(a, "AC5\n");
	}
}