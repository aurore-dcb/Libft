/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducobu <aducobu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:37:37 by aducobu           #+#    #+#             */
/*   Updated: 2023/05/02 15:02:41 by aducobu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0 && (!src || !dst))
		return (0);
	while (dst[i] && i < dstsize)
		i++;
	dst_len = i;
	while (src[i - dst_len] && i + 1 < dstsize)
	{
		dst[i] = src[i - dst_len];
		i++;
	}
	if (dst_len < dstsize)
		dst[i] = '\0';
	return (dst_len + src_len);
}
