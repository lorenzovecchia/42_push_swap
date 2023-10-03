/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:10:15 by lvecchia          #+#    #+#             */
/*   Updated: 2023/06/08 14:56:29 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*subs;

	if (start > ft_strlen(s))
	{
		subs = malloc(1);
		if (!subs)
			return (0);
		subs[0] = '\0';
		return (subs);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	subs = malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (0);
	i = 0;
	while (start < ft_strlen(s) && i < len && s[start])
		subs[i++] = s[start++];
	subs[i] = '\0';
	return (subs);
}
/*
int main(int argc, char *argv[])
{
    if (argc >= 4)
    {
        const char *str = argv[1];
        unsigned int start = (unsigned int)ft_atoi(argv[2]);
        size_t len = (size_t)ft_atoi(argv[3]);

        char *result = ft_substr(str, start, len);

        if (result != NULL)
        {
            printf("Subcadena: %s\n", result);
            free(result); // No olvides liberar la memoria asignada
        }
        else
        {
            printf("Error al obtener la subcadena.\n");
        }
    }
    else
    {
        printf("No se proporcionaron suficientes argumentos.\n");
    }

    return 0;
}
*/
/*
s: La string desde la que crear la substring.
start: El índice del caracter en ’s’ desde el que
empezar la substring.
len: La longitud máxima de la substring.
Devuelve string resultante (subs).
NULL si falla la reserva de memoria.
La substring empieza desde el índice ’start’ y
tiene una longitud máxima ’len’.
*/
