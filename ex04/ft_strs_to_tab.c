/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shashemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:12:26 by shashemi          #+#    #+#             */
/*   Updated: 2024/08/21 09:12:28 by shashemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(src) * (ft_strlen(src) + 1));
	if (dest != 0)
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*tab;

	i = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab != 0)
	{
		while (i < ac)
		{
			tab[i].str = av[i];
			tab[i].copy = ft_strdup(av[i]);
			tab[i].size = ft_strlen(av[i]);
			i++;
		}
		tab[i].str = 0;
	}
	return (tab);
}
