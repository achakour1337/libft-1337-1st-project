/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 02:28:51 by achakour          #+#    #+#             */
/*   Updated: 2023/11/30 14:58:26 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dstp;
	const unsigned char	*srcp;
	size_t				i;

	srcp = src;
	dstp = dst;
	i = 0;
	if (dst == src)
		return (dst);
	if (!(dstp == srcp))
	{
		while (i < n)
		{
			dstp[i] = srcp[i];
			++i;
		}
	}
	return (dstp);
}
