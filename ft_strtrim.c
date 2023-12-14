/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:04:49 by achakour          #+#    #+#             */
/*   Updated: 2023/11/23 13:34:46 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		++i;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buff;
	size_t	start;
	size_t	end;

	end = ft_strlen(s1);
	start = 0;
	while (check(s1[start], (char *)set) && start < end)
	{
		++start;
	}
	--end;
	while (check(s1[end], (char *)set) && end > start)
	{
		--end;
	}
	++end;
	buff = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!buff)
	{
		return (NULL);
	}
	ft_strlcpy(buff, (char *)s1 + start, end - start + 1);
	return (buff);
}
