/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:09:00 by achakour          #+#    #+#             */
/*   Updated: 2023/11/30 14:58:52 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int				i;
	unsigned char	ch;

	ch = c;
	i = -1;
	while (s[++i])
	{
		if (s[i] == ch)
			return (s + i);
	}
	if (ch == '\0')
	{
		return (&s[i]);
	}
	return (0);
}
