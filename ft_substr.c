/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:06:06 by achakour          #+#    #+#             */
/*   Updated: 2023/12/03 14:54:18 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*sub;

	if (s == NULL)
	{
		return (NULL);
	}
	slen = ft_strlen(s);
	if (start >= slen)
	{
		return (ft_calloc(1, 1));
	}
	if (len > slen)
	{
		len = ft_strlen(s + start);
	}
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, (char *)s + start, len + 1);
	return (sub);
}
