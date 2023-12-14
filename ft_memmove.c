/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:37:28 by achakour          #+#    #+#             */
/*   Updated: 2023/12/02 12:44:00 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	const unsigned char	*srcp;
	unsigned char		*dstp;

	srcp = src;
	dstp = dst;
	if (srcp < dstp && (srcp + n) >= dstp)
	{
		while (n--)
		{
			dstp[n] = srcp[n];
		}
	}
	else if (!(dstp == srcp))
	{
		ft_memcpy(dstp, srcp, n);
	}
	return (dstp);
}
