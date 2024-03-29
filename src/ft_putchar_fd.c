/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:42:08 by pbouillo          #+#    #+#             */
/*   Updated: 2022/11/28 12:58:32 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the character ’c’ to the given file
** descriptor
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
