/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 08:31:05 by lvecchia          #+#    #+#             */
/*   Updated: 2023/06/06 19:23:43 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		idx;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!dest)
		return (NULL);
	idx = 0;
	while (str[idx])
	{
		dest[idx] = str[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}
/*
int main(void)
{
    const char *str = "Testin FT_STRDUP function";
    char *duplicate = ft_strdup(str);

    if (duplicate != NULL)
    {
        printf("String original: %s\n", str);
        printf("String duplicada: %s\n", duplicate);
        free(duplicate); 
    }
    else
    {
        printf("Error al duplicar la cadena.\n");
    }

    return 0;
}
*/
/*
The strdup() function allocates sufficient memory for a copy of the
string s1, does the copy, and returns a pointer to it.  The pointer may
subsequently be used as an argument to the function free(3).

If insufficient memory is available, NULL is returned and errno is set to
ENOMEM.
*/
