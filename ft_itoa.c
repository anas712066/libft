/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:12:43 by mumajeed          #+#    #+#             */
/*   Updated: 2024/10/15 10:52:51 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int	len;

	len = (n <= 0);
	len = 1;
	len = 0;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static int	abs_val(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	int			is_negative;

	len = num_len(n);
	is_negative = (n < 0);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[--len] = abs_val(n % 10) + '0';
		n /= 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}
/*int	main(void)
{
	int		numbers[] = {123, -456, 0, 2147483647, -2147483648};
	char	*result;
	int		i;

	i = 0;
	while (i < 5) // Probar los 5 números del array
	{
		result = ft_itoa(numbers[i]);
		if (result)
		{
			printf("Número: %d, Como cadena: %s\n", numbers[i], result);
			free(result);  // Liberar la memoria reservada
		}
		else
			printf("Error: no se pudo convertir el número %d\n", numbers[i]);
		i++;
	}
	return (0);
}*/
