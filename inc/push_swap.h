/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:33:19 by lvecchia          #+#    #+#             */
/*   Updated: 2023/10/05 11:33:27 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

// Stack

typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
}	t_stack;

//  Check 

int		validate_args(int argc, char **argv);
int		check_duplicate(int argc, char **argv);
int		contains_digits(char *str);
int		check_digits(int argc, char **argv);
int		check_range(int argc, char **argv);

// Utils

int		push_swap(int argc, char **argv);
char	**ft_split(const char *s, char c);
int		is_ordered(t_stack *n);
int		arg_split(int argc, char **argv);

// Stack manipulation

void	get_range(t_stack *a, t_stack *b, int argc);
t_stack	*ft_init_list(char **argv);
void	ft_printstack(t_stack *stack, char *str);
t_stack	*start_stack_a(char **argv);
void	ft_sa(t_stack *a);
void	ft_sb(t_stack *a, t_stack *b);
void	ft_order_3(t_stack **a);
void	ft_order_4(t_stack **a, t_stack **b);
void	ft_order_5(t_stack **a, t_stack **b);
t_stack	*ft_newnode(int num);
t_stack	*ft_get_last_node(t_stack *stack);
void	ft_stack_add_back(t_stack **stack, t_stack *newnode);


#endif

