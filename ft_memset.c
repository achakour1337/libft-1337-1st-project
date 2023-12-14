/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 02:29:50 by achakour          #+#    #+#             */
/*   Updated: 2023/11/30 14:58:34 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	unch;
	unsigned char	*ptr;
	size_t			i;

	unch = c;
	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = unch;
		++i;
	}
	return (s);
}
