/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 16:16:36 by pbouillo          #+#    #+#             */
/*   Updated: 2022/12/03 15:45:40 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Counts the number of nodes in a list
** Returns the length of the list
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	if (lst == NULL)
		return (0);
	while (lst)
	{
		lst = lst->next;
		++size;
	}
	return (size);
}
