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

int main (int main, char **argv)
{
	if (argc > 1)
	{
		if (argc == 2)
		{
			ft_arg_split(argc, argv);
			return (0);
		}
		else
		{
			if (ft_validate_arg(argc, argv))
				return (1);
			push_swap(argc - 1, argv + 1);
		}
	}
	return (0);
}
