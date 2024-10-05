/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:08:41 by mumajeed          #+#    #+#             */
/*   Updated: 2024/09/30 10:19:12 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (c + 32);
	}
	return (c);
}
/*int	main()
{
	char letra = 'B';
	char resultado = ft_tolower(letra);

	printf("caracter original: %c\n", letra);
	printf("caracter en minuscla: %c\n", resultado);
	return (0);
}*/
