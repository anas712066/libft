/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:23:10 by mumajeed          #+#    #+#             */
/*   Updated: 2024/10/03 11:03:24 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
		{
			return ((void *)(p + i));
		}
		i++;
	}
	return (NULL);
}
/*int	main()
{
	const char str[] = "Hola mundo";
	char ch = 'm';
	char *result;

	result = ft_memchr(str, ch, strlen(str));

	if (result != NULL)
	{
		printf("letra '%c' SE econtradaa posicion: %ld\n", ch, result - str);
	} else {
		printf("La letra '%c' no fue encontrada.\n", ch);
	}
	return (0);
	
}*/
