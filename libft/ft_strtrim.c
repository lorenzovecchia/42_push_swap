/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:42:28 by lvecchia          #+#    #+#             */
/*   Updated: 2023/06/10 18:53:28 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (ft_strrchr(set, s1[len]) && len)
		len--;
	return (ft_substr(s1, 0, len + 1));
}
/*
int main(int argc, char *argv[])
{
	const char *s1 ;
	const char *set;
	if (argc >= 2)
	{
    	s1 = argv[1];
		set = argv[2];
	}
    printf("%s",ft_strtrim(s1,set));
    return (0);
}
*/
/*
s1: La string que debe ser recortada.
set: Los caracteres a eliminar de la string.
Devuelve La string recortada o NULL si falla 
la reserva de memoria.
Elimina todos los caracteres de la string ’set’
desde el principio y desde el final de ’s1’, hasta
encontrar un caracter no perteneciente a ’set’. La
string resultante se devuelve con una reserva de
malloc(3)
*/
