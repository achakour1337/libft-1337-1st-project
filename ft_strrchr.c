/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:16:28 by achakour          #+#    #+#             */
/*   Updated: 2023/11/30 14:59:17 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	size_t			j;
	unsigned char	ch;

	ch = c;
	j = ft_strlen(s);
	if (ch == '\0')
	{
		return (&s[j]);
	}
	--j;
	while (j != (size_t)-1)
	{
		if (s[j] == ch)
		{
			return (&s[j]);
		}
		--j;
	}
	return (NULL);
}
