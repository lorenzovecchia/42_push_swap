/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:42:28 by lvecchia          #+#    #+#             */
/*   Updated: 2023/06/10 18:53:28 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	size_t	n_split(char const *s, char c)
{
	size_t	i;
	size_t	n_split;

	i = 0;
	n_split = 0;
	while (s[i])
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c)
			n_split++;
		i++;
	}
	return (n_split);
}

static	void	freemem(char **res)
{
	int	i;

	i = -1;
	while (res[++i])
		free(res[i]);
	free(res);
}

static	char	**show_res(char const *s, char c, char	**res)
{
	size_t	i;
	size_t	start;
	size_t	group;

	start = 0;
	i = 0;
	group = 0;
	while (s[i])
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c)
		{
			res[group] = ft_substr(s, start, i - start + 1);
			if (!res[group])
			{
				freemem(res);
				return (0);
			}
			group++;
		}
		if (s[i] == c && (s[i + 1] != c || s[i + 1] != '\0'))
			start = i + 1;
		i++;
	}
	res[group] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (0);
	res = malloc(sizeof(char *) * (n_split(s, c) + 1));
	if (!res)
		return (0);
	res = show_res(s, c, res);
	return (res);
}
/*
int main(int argc, char **argv)
{
	char const	*input_char;
	char c;
	char **res;
	int i;

	if (argc >= 2)
	{
    	input_char = argv[1];
		c = *argv[2];
		res = ft_split(input_char,c);
    	i = 0;
    	while (res[i] != NULL) 
		{
        	printf("%s\n", res[i]);
        	i++;
    	}
	}
    return 0;
}
*/
/*
int main() {
    
	char input_char[] = "asdXsdefwXasdasfXdsfdsXw";
	char	**res;
	res = ft_split(input_char,'X');
    int i = 0;
    while (res[i] != NULL) {
        printf("%s\n", res[i]);
        i++;
    }

    return 0;
}*/
/*
s: La string a separar.
c: El carácter delimitador.
El array de nuevas strings resulatente de la
separación.
NULL si falla la reserva de memoria.
*/