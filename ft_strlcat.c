/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbouillo <pbouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:13:16 by pbouillo          #+#    #+#             */
/*   Updated: 2022/03/26 17:52:17 by pbouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Concatenate strings. take the full size of 
the destination buffer and guarantee NUL-termination 
if there is room. Note that room for the NUL 
should be included in dstsize.
strlcat() appends string src to the end of dst. 
It will append at most dstsize - strlen(dst) - 1 characters. 
It will then NUL-terminate, unless dstsize is 0 or 
the original dst string was longer than dstsize 
(in practice this should not happen as it means 
that either dstsize is incorrect or that dst is not a proper string).
If the src and dst strings overlap, the behavior is undefined.*/