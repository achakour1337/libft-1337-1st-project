/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:10:03 by achakour          #+#    #+#             */
/*   Updated: 2023/11/24 11:31:51 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*buff;

	if (!s || !f)
	{
		return (NULL);
	}
	len = ft_strlen(s);
	buff = (char *)malloc(sizeof(char) * len + 1);
	if (!buff)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		buff[i] = f(i, (char)s[i]);
		++i;
	}
	buff[i] = '\0';
	return (buff);
}
