/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 21:31:57 by abiari            #+#    #+#             */
/*   Updated: 2019/10/23 12:14:37 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
    size_t		i;
    unsigned char	*d;
    const unsigned char	*s;

    d = dst;
    s = src;
    i = 0;
    if ((!d && !s) || ft_memcmp(d,s,n) == 0)
	return (dst);
    while (i < n)
    {
	d[i] = s[i];
	i++;
    }
    return (dst);
}
