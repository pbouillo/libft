/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:06:54 by pbouillo          #+#    #+#             */
/*   Updated: 2022/04/04 12:09:40 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Adds the node 'new' at the beginning of the list lst */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)