/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:35:01 by lvecchia          #+#    #+#             */
/*   Updated: 2023/05/26 15:04:26 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*lastfound;

	lastfound = NULL;
	while (*s)
	{
		if (*s == (char)c)
		lastfound = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (lastfound);
}
/*
int	main(void)
{
	char	*found;
	const char *str = "Check this!";
	int ctf = 'k';
	found = ft_strchr(str, ctf);
	if (found != 0)
		printf("Carácter encontrado: %c\n", *found);
	else
		printf("Carácter no encontrado.\n");
	return (0);
}
*/

/*
The strrchr() function locates the first occurrence of c 
(converted to a char) in the string pointed to by s 
starting from th end.  
The terminating null character is considered to be part 
of the string; therefore if c is `\0', the func-
tions locate the terminating `\0'.
The functions strchr() return a pointer to the located
character, or NULL if the character 
does not appear in the string.
*/
