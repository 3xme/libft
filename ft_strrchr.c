/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:02:03 by abiari            #+#    #+#             */
/*   Updated: 2019/10/14 08:19:33 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s2;

	i = ft_strlen(s);
	s2 = (char*)s;
	while (i >= 0)
	{
		if (s2[i] == c)
		{
			return (&s2[i]);
		}
		i--;
	}
	return (NULL);
}
