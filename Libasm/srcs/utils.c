/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobenass <jobenass@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 19:45:02 by jobenass          #+#    #+#             */
/*   Updated: 2020/07/08 20:45:57 by jobenass         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/test.h"

static int		ft_countword(const char *str, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	if (!str[i])
		count = 0;
	else if (str[0] != c)
		count++;
	while (str[i] != '\0')
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

static char		*ft_strings(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i] == c && str[i + 1] != '\0')
		i++;
	str = &str[i];
	return (str);
}

static int		ft_lenword(char *str, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (str[i] != c && str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

static char		*ft_split_suit(char *str, char c, char **addr, int i)
{
	int		j;
	int		k;

	k = 0;
	if (!(addr[i] = (char *)malloc(sizeof(char) * ft_lenword(str, c) + 1)))
	{
		while (k < i)
			free(addr[k++]);
		free(addr);
		return (NULL);
	}
	j = 0;
	while (j < ft_lenword(str, c) && str[j])
	{
		addr[i][j] = str[j];
		j++;
	}
	addr[i][j] = '\0';
	return (addr[i]);
}

char			**ft_split(char const *s, char c)
{
	char	**tab;
	char	*str;
	int		i;
	int		k;

	str = (char *)s;
	tab = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * ft_countword(s, c) + 1)))
		return (NULL);
	i = 0;
	while (i < ft_countword(s, c))
	{
		k = 0;
		str = ft_strings(str, c);
		if (!(tab[i] = ft_split_suit(str, c, tab, i)))
			return (NULL);
		while (str[k] && str[k] != c)
			k++;
		str = &str[k + 1];
		i++;
	}
	tab[i] = 0;
	return (tab);
}

void	ft_tabstrdel(char **str)
{
	int	len;
	int	i;

	if (!str)
		return ;
	len = 0;
	while (str[len])
		len++;
	i = -1;
	while (++i < len)
	{
		free(str[i]);
		str[i] = 0;
	}
	free(str);
	str = 0;
}
