/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:19:03 by lvecchia          #+#    #+#             */
/*   Updated: 2023/10/05 16:19:05 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_order_3(t_stack **a)
{
	int	max;
	int	min;

	max = ft_find_max(*a);
	min = ft_find_min(*a);
	if (((*a)->num > (*a)->next->num) && ((*a)->next->next->num > (*a)->num)) // caso 2 1 3
		ft_sa(*a);
	else if (((*a)->next->num > (*a)->num) && ((*a)->num < (*a)->next->next->num)) //caso 1 3 2
	{
		ft_sa(*a);//3 1 2
		ft_ra(a);
	}
	else if ((*a)->num == max && (*a)->next->num == min) // caso 3 1 2
		ft_ra(a);
	else if ((*a)->num == max && (*a)->next->next->num == min) // caso 3 2 1
	{
		ft_sa(*a);//2 3 1
		ft_rra(a);
	}
	else //caso 2 3 1
		ft_rra(a);
}

void	ft_order_4(t_stack **a, t_stack **b)
{
	int	min;

	if (is_ordered(*a))
		return ;
	min = ft_find_min(*a);
	if ((*a)->num == min)//caso 1er valor sea el min
		ft_pb_order3_pa(a, b);
	else if ((*a)->next->num == min)//caso 2do valor sea el min
	{
		ft_sa(*a);
		ft_pb_order3_pa(a, b);
	}
	else if ((*a)->next->next->num == min)//caso 3er valor sea el min
	{
		ft_rra(a);
		ft_rra(a);
		ft_pb_order3_pa(a, b);
	}
	else//caso 4to valor sea el min
	{
		ft_rra(a);
		ft_pb_order3_pa(a, b);
	}
}

void	ft_order_5(t_stack **a, t_stack **b)
{
	int	min;

	min = ft_find_min(*a);
	if ((*a)->num == min)//caso 1er valor sea el min
		ft_pb_order4_pa(a, b);
	else if ((*a)->next->num == min)//caso 2do valor sea el min
	{
		ft_sa(*a);
		ft_pb_order4_pa(a, b);
	}
	else if ((*a)->next->next->num == min)//caso 3er valor sea el min
	{
		ft_ra(a);
		ft_sa(*a);
		ft_pb_order4_pa(a, b);
	}
	else//caso 4to o 5to valor es el min
	{
		ft_order_min_in_4_5(a, b);
	}
}