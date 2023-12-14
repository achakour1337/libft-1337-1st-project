/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 02:27:34 by achakour          #+#    #+#             */
/*   Updated: 2023/11/30 14:58:23 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1p;
	const unsigned char	*s2p;
	size_t				i;

	if (s1 == s2)
		return (0);
	i = 0;
	s1p = (unsigned char *)s1;
	s2p = (unsigned char *)s2;
	while (n && i < n)
	{
		if (s1p[i] != s2p[i])
		{
			return (s1p[i] - s2p[i]);
		}
		++i;
	}
	return (0);
}
