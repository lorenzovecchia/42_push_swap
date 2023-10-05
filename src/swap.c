/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:12:38 by lvecchia          #+#    #+#             */
/*   Updated: 2023/10/05 16:12:41 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/*sa : swap a - intercambia los dos primeros elementos encima del stack a.*/
void	ft_sa(t_stack *a)
{
	if (ft_lst_size(a) > 1)
	{
		ft_swap(a);
		printf("sa\n");
	}
}

/*sb : swap b - intercambia los dos primeros elementos encima del stack b.*/
void	ft_sb(t_stack *a, t_stack *b)
{
	(void)a;
	if (ft_lst_size(b) > 1)
	{
		ft_swap(b);
		printf("sb\n");
	}
}