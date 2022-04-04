/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:51:21 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/04 10:50:19 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* sets all bytes of s (any datatype) to 0. 
If n is zero, ft_bzero does nothing */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;

	while (i < n)
	{	
		((char *)s)[i] = '\0';
		i++;
	}
}
