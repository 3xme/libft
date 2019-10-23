/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:32:40 by abiari            #+#    #+#             */
/*   Updated: 2019/10/22 15:17:52 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*newstr;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	if (start >= ft_strlen(s))
	{
		if (!(newstr = (char*)malloc(1)))
			return (NULL);
		newstr[0] = '\0';
		return (newstr);
	}
	if (!(newstr = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (i < len)
	{
		newstr[i++] = s[start++];
	}
	newstr[i] = '\0';
	return (newstr);
}
