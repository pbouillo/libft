/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:09:16 by pbouillo          #+#    #+#             */
/*   Updated: 2022/11/28 12:56:41 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates with (with malloc(3)) and returns
** a new node. The member variable 'content'
** is initialized with the value of the parameter 'content'.
** The variable 'next' is initialized to NULL.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
