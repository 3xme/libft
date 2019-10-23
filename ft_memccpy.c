/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:52:49 by abiari            #+#    #+#             */
/*   Updated: 2019/10/23 12:18:45 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	unsigned int	    i;
	unsigned char	    *dest;
	const unsigned char *src;

	src = str2;
	dest = str1;
	i = 0;
	if (d == NULL && s == NULL && len == 0 && c == 0)
	    return (str1);
	while (i < n)
	{
	    if (src[i] == (unsigned char)c)
	    {
		dest[i] = src[i];
		return (dest + i + 1);
	    }
	    dest[i] = src[i];
	    i++;
	}
	if (i == len)
	    return (NULL);
	return (dest);
}
