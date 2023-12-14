/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:16:30 by achakour          #+#    #+#             */
/*   Updated: 2023/12/03 15:07:34 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void				*p;
	unsigned long long	total;

	total = count * size;
	if (total > ULONG_MAX)
		return (NULL);
	p = malloc(count * size);
	if (!p)
	{
		return (NULL);
	}
	if (count == 0 || size == 0)
	{
		ft_bzero(p, 1);
	}
	ft_bzero(p, count * size);
	return (p);
}
