/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:36:57 by mumajeed          #+#    #+#             */
/*   Updated: 2024/10/05 18:36:57 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*int	main()
{
	char src[] = "Hello, World";
	char dest[20];

	memcpy(dest, src, 13);
	printf("FUNCION ORG: %s\n", dest);
	
	ft_memcpy(dest, src, 13);
	printf("TU FUNCION: %s\n", dest);
	return (0);	
}*/
