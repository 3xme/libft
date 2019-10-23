/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 06:30:38 by abiari            #+#    #+#             */
/*   Updated: 2019/10/23 12:32:31 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    unsigned int    dlen;
    unsigned int    slen;
    int		    i;

    i = -1;
    dlen = ft_strlen(dst);
    slen = ft_strlen(src);
    if (size == 0)
	return (slen);
    else if (dlen >= size)
	slen += size;
    else
	slen += dlen;
    while (src[++i] && dlen < size - 1)
	dst[dlen++] = src[i];
    dst[dlen] = '\0';
    return (slen);
}
