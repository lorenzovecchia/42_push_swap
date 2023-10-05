/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:34:40 by lvecchia          #+#    #+#             */
/*   Updated: 2023/10/05 13:34:45 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	is_ordered(t_stack *n)
{
	// Si la lista está vacía o tiene un solo elemento: ya está ordenada.
	if (n == NULL || n->next == NULL)
		return (1);
	while (n->next != NULL)
	{
		// Si se encuentra un elemento mayor que el siguiente, la lista no está ordenada.
		if (n->num > n->next->num)
			return (0);
		n = n->next;
	}
	return (1);
}

void	ft_printstack(t_stack *stack, char *str)
{
	printf("\n------ STACK ------\n");
	printf("%s\n", str);
	while (stack != NULL)
	{
		printf("%i\n", stack->num);
		stack = stack->next;
	}
}

t_stack	*start_stack_a(char **argv)
{
	int		i;
	t_stack	*stack;
	t_stack	*newnode;

	stack = NULL;
	newnode = NULL;
	i = 0;
	while (argv[i])
	{
		newnode = ft_newnode(ft_atoi(argv[i]));
		ft_stack_add_back(&stack, newnode);
		i++;
	}
	return (stack);
}

void	ft_stack_add_back(t_stack **stack, t_stack *newnode)
{
	t_stack	*lastnode;

	lastnode = NULL;
	if (stack)
	{
		lastnode = ft_get_last_node(*stack);
		if (!lastnode)// Si lastnode es NULL, la lista esta vacía.
			*stack = newnode;// Asigna el nuevo nodo como el primer nodo de la lista.
		else
			lastnode->next = newnode;// Enlaza el último nodo(actual) con el nuevo nodo.
	}
}

t_stack	*ft_get_last_node(t_stack *stack)
{
	if (stack)
	{
		while (stack->next)
		{
			stack = stack->next;
		}
	}
	return (stack);
}

t_stack	*ft_newnode(int num)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->num = num;
	node->next = NULL;
	return (node);
}
