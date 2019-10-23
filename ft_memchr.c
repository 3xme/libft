/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:10:01 by abiari            #+#    #+#             */
/*   Updated: 2019/10/23 12:22:17 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t lenght)
{
	unsigned int	    i;
	const unsigned char *string;

	string = buf;
	i = 0;
	while (i < lenght)
	{
		if (string[i] == (unsigned char)ch)
			return ((void *)(buf + i));
		i++;
	}
	return (NULL);
}
