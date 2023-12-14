/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:31:07 by achakour          #+#    #+#             */
/*   Updated: 2023/11/23 13:34:30 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (little[j] == '\0')
	{
		return ((char *)big);
	}
	i = 0;
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] && little[j] && i
			+ j < len)
		{
			++j;
		}
		if (little[j] == '\0')
		{
			return ((char *)(big + i));
		}
		++i;
	}
	return (NULL);
}
