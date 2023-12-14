/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:15:38 by achakour          #+#    #+#             */
/*   Updated: 2023/11/14 11:19:20 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*p;
	int		len;

	len = ft_strlen(str);
	p = (char *)malloc(sizeof(char) * len + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(p, (char *)str, len + 1);
	return (p);
}
