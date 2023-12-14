/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:43:36 by achakour          #+#    #+#             */
/*   Updated: 2023/11/16 08:22:39 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	buffer_size;
	size_t	s1len;
	size_t	s2len;
	char	*buffer;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	buffer_size = s1len + s2len + 1;
	buffer = (char *)malloc(buffer_size);
	if (!buffer)
	{
		return (NULL);
	}
	ft_strlcpy(buffer, (char *)s1, buffer_size);
	ft_strlcat(buffer, (char *)s2, buffer_size);
	return (buffer);
}
