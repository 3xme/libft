/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 20:40:42 by abiari            #+#    #+#             */
/*   Updated: 2019/10/22 15:45:55 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_free(char **tab)
{
	while (*tab != NULL)
		free(*tab++);
	free(tab);
}

static	int		ft_word(char const *str, int i, int *nbword, int c)
{
	*nbword += 1;
	while (str[i] != c && str[i] != '\0')
		i++;
	return (i);
}

static	int		ft_add_word(char **tab, char const *str, int *nbword, int c)
{
	int		wlen;
	int		j;
	char	*words;
	int		i;

	wlen = 0;
	i = 0;
	while (str[wlen] != c && str[wlen] != '\0')
		wlen++;
	if (!(words = (char *)malloc((wlen + 1) * sizeof(char))))
	{
		ft_free(tab);
		return (-1);
	}
	words[wlen] = '\0';
	j = 0;
	while (i < wlen)
	{
		words[j++] = str[i++];
	}
	tab[*nbword] = words;
	*nbword += 1;
	return (wlen);
}

char			**ft_split(char const *str, char c)
{
	int		i;
	char	**tab;
	int		count;

	if (str == NULL || !c)
		return (NULL);
	i = 0;
	count = 0;
	while (str[i] != '\0')
		if (str[i] != c)
			i = ft_word(str, i, &count, c);
		else
			i++;
	if ((tab = (char **)malloc((count + 1) * sizeof(char *))) == NULL)
		return (NULL);
	tab[count] = 0;
	i = 0;
	count = 0;
	while (str[i] != '\0')
		if (str[i] != c)
		{
		    if (ft_add_word(tab, str + i, &count, c) == -1)
			    return (NULL);
		    i += ft_add_word(tab, str + i, &count, c);
		}
		else
		    i++;
	return (tab);
}
