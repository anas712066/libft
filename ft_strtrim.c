/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:05:46 by mumajeed          #+#    #+#             */
/*   Updated: 2024/10/13 14:34:33 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	len = end - start;
	trimmed_str = (char *)malloc(len + 1);
	if (!trimmed_str)
		return (NULL);
	strncpy(trimmed_str, s1 + start, len);
	trimmed_str[len] = '\0';
	return (trimmed_str);
}
/*int	main(void)
{
	char *s1 = "   ***Hello, World!***   ";
	char *set = " *";

	char *trimmed_str = ft_strtrim(s1, set);

	if (trimmed_str)
	{
		printf("Cadena original: '%s'\n", s1);
		printf("Cadena recortada: '%s'\n", trimmed_str);
		free(trimmed_str);
	}
	else
	{
		printf("Error en la función ft_strtrim\n");
	}
	return (0);
}*/
