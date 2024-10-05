/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:34:32 by mumajeed          #+#    #+#             */
/*   Updated: 2024/09/29 20:13:05 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (p);
}
// argc: cantidad de argumentos
// argv: valores de los argumentos
// argv[i]
// int	main(int argc, char **argv)
/*int	main(void)
{
	char a[] = "unicornio";

	printf ("%s", (char *)ft_memset(a, 'c', 2));
	return (0);
}*/
