/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:30:55 by mumajeed          #+#    #+#             */
/*   Updated: 2024/10/09 00:30:55 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;
    size_t s_len;

    s_len = 0;
    if (!s)
        return (NULL);

    while (s[s_len])
        s_len++;
    if (start >= s_len) {
        substr = (char *)malloc(1);
        if (!substr)
            return (NULL);
        substr[0] = '\0';
        return (substr);
    }
    if (len > s_len - start)
        len = s_len - start;
    substr = (char *)malloc((len + 1) * sizeof(char));
    if (!substr)
        return (NULL);
    i = 0;
    while (i < len && s[start + i]) {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}
