/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducobu <aducobu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:40:00 by aducobu           #+#    #+#             */
/*   Updated: 2023/05/02 11:40:11 by aducobu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*res;

	i = 0;
	res = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			res = ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		res = (char *)(s + i);
	return (res);
}
