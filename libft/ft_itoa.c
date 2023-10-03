/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:23:01 by lvecchia          #+#    #+#             */
/*   Updated: 2023/06/12 15:56:13 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*newstr(size_t size)
{
	char	*str;
	char	*p;

	str = (char *)malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	p = str;
	while (size)
	{
		*p++ = '\0';
		size--;
	}
	*p = '\0';
	return (str);
}

char	create_array(char *array, int size, int neg, int n)
{
	while (size--)
	{
		if (neg)
			array[size + neg] = -(n % 10) + '0';
		else
			array[size + neg] = (n % 10) + '0';
		n /= 10;
	}
	return (*array);
}

char	*ft_itoa(int n)
{
	int			size;
	int			neg;
	long int	tmp;
	char		*array;

	neg = 0;
	if (n < 0)
		neg = 1;
	tmp = n;
	size = 1;
	if (tmp < 0)
		tmp *= -1;
	while (tmp > 9)
	{
		size++;
		tmp /= 10;
	}
	array = newstr(size + neg);
	if (array == NULL)
		return (NULL);
	if (neg)
		array[0] = '-';
	create_array(array, size, neg, n);
	return (array);
}

/*
int	main(void)
{
	char	*result = ft_itoa(12345678);
    if (result != NULL)
    {
        printf("La conversión a char es: %s\n", result);
    }

    result = ft_itoa(-123456789);
    if (result != NULL)
    {
        printf("La conversión a char es: %s\n", result);
    }

    result = ft_itoa(0);
    if (result != NULL)
    {
        printf("La conversión a char es: %s\n", result);
    }

    return 0;
}
*/

/*
Utilizando malloc(3), genera una string que
represente el valor entero recibido como argumento.
Los números negativos tienen que gestionarse.
*/