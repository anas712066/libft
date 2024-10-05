/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:17:05 by mumajeed          #+#    #+#             */
/*   Updated: 2024/09/27 12:26:06 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = '0';
		i++;
	}
}
/*int	main()
{
	char a[6] = "Hola";

	printf("Antes que el ft_bzero: %s\n", a);

	ft_bzero(a, 4);

	printf ("Despues: %s\n", a);
	return (0);
}*/
