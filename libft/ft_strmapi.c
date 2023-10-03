/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:23:01 by lvecchia          #+#    #+#             */
/*   Updated: 2023/06/12 15:56:13 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*newstr;

	i = 0;
	if (!s || !f)
		return (0);
	newstr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!newstr)
		return (0);
	while (s[i])
	{
		newstr[i] = f(i, s[i]);
			i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
#include <stdio.h>
#include <stdlib.h>

char replace(unsigned int i, char c)
{
    c = c - i;
    return c;
}
int main()
{
    char input[] = "test";
    char *result = ft_strmapi(input, replace);

    if (result)
    {
        printf("Input: %s\n", input);
        printf("Output: %s\n", result);
        free(result); 
    }
    else
    {
        printf("Error: No se pudo asignar memoria.\n");
    }

    return 0;
}*/
/*
A cada carácter de la string ’s’, aplica la
función ’f’ dando como parámetros el índice de cada
carácter dentro de ’s’ y el propio carácter. Genera
una nueva string con el resultado del uso sucesivo
de ’f’
Devuelve la string creada tras el correcto uso de ’f’
sobre cada carácter.
NULL si falla la reserva de memoria.
*/
