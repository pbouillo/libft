/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:14:17 by pbouillo          #+#    #+#             */
/*   Updated: 2022/11/28 13:02:06 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a substring
** from the string ’s’.
** The substring begins at index ’start’ and is of
** maximum size ’len’. Returns the substring, NULL if allocation failed
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;
	size_t	start_copy;
	size_t	src_len;

	i = 0;
	if (s == NULL)
		return (NULL);
	src_len = ft_strlen(s);
	start_copy = ((size_t)start);
	sub = NULL;
	if (start_copy > src_len)
		return (ft_strdup(""));
	if (start < src_len && len > src_len)
		len = src_len;
	sub = malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	while (i < len && s[start_copy + i])
	{
		sub[i] = s[start_copy + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
