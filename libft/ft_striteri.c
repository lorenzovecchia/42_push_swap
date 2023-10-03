/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:32:15 by lvecchia          #+#    #+#             */
/*   Updated: 2023/06/12 20:14:18 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

/*
void printchar(unsigned int index, char *c)
{
    printf("Índice: %u, Carácter: %c\n", index, *c);
}

int main()
{
    char str[] = "Test striteri";

    printf("Cadena original: %s\n", str);

    ft_striteri(str, printchar);

    return 0;
}
*/
/*
A cada carácter de la string ’s’, aplica la función
’f’ dando como parámetros el índice de cada
carácter dentro de ’s’ y la dirección del propio
carácter, que podrá modificarse si es necesario.
s: La string que iterar.
f: La función a aplicar sobre cada carácter.
No devuelve nada.
*/
