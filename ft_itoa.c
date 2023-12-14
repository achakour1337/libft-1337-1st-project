/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achakour <achakour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:42:43 by achakour          #+#    #+#             */
/*   Updated: 2023/12/02 12:28:33 by achakour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_nbr_len(int n)
{
	unsigned int	i;
	unsigned int	nbr;

	nbr = n;
	i = 0;
	if (n < 0)
	{
		nbr = -n;
		++i;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		++i;
	}
	return (i + 1);
}

static void	put_nbrv2(char *digit_arr, int n, unsigned int len)
{
	unsigned int	nbr;
	unsigned int	i;

	nbr = n;
	i = len - 1;
	if (!(n > 0))
	{
		digit_arr[0] = '-';
		nbr = -n;
	}
	if (nbr >= 9)
	{
		digit_arr[i] = (nbr % 10) + '0';
		--i;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		digit_arr[i] = (nbr % 10) + '0';
		--i;
	}
}

char	*ft_itoa(int n)
{
	unsigned int	len;
	char			*digit_arr;

	len = ft_nbr_len(n);
	digit_arr = (char *)malloc(sizeof(char) * len + 1);
	if (!digit_arr)
	{
		return (NULL);
	}
	ft_bzero(digit_arr, len + 1);
	put_nbrv2(digit_arr, n, len);
	return (digit_arr);
}
