/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 16:55:04 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/04 11:03:31 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strchr() function locates the first occurrence of c 
(converted to a char) in the string 
pointed to by s. The terminating null character 
is considered to be part of the string;
therefore if c is `\0', the functions locate
the terminating `\0'. 
Returns a pointer to the located character, or NULL
if the character does not appear in the string 
- finds c in s, returns 0 if not found */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((*s != c) && (*s != '\0'))
	{	
		s++;
	}
	if (*s == c)
	{
		return ((char *)s);
	}
	return ((char *) NULL);
}
