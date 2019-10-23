/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 21:05:33 by abiari            #+#    #+#             */
/*   Updated: 2019/10/22 15:23:05 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		fpos(char const *str, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (1)
	{
		if (!str[j] || i == ft_strlen(set) + 1)
			break ;
		if (str[j] == set[i])
		{
			j++;
			i = 0;
		}
		else
			i++;
	}
	return (j);
}

static int		lpos(char const *str, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(str) - 1;
	while (1)
	{
		if (!str[j] || i == ft_strlen(set) + 1)
			break ;
		if (str[j] == set[i])
		{
			j--;
			i = 0;
		}
		else
			i++;
	}
	return (j);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*new;

	if (!s1)
		return (NULL);
	new = ft_substr(s1, fpos(s1, set), lpos(s1, set) - fpos(s1, set) + 1);
	if (new == NULL)
	{
		if ((new = malloc(1)) == NULL)
			return (NULL);
		*new = '\0';
	}
	return (new);
}
