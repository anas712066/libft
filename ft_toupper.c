/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:01:25 by mumajeed          #+#    #+#             */
/*   Updated: 2024/09/30 10:18:46 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
/*int		main()
{
	char letra = 'b';
	char resultado = ft_toupper(letra);

	printf("caracter original: %c\n", letra);
	printf("caracter en mayuscula: %c\n", resultado);
	return (0);
}*/
