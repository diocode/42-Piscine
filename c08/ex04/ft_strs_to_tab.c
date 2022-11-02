/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:42:51 by digoncal          #+#    #+#             */
/*   Updated: 2022/10/13 09:27:32 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	str = (char *) malloc(ft_strlen(src) * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*arr;

	arr = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}
/*#include <stdio.h>
int	main(int ac, char **av)
{
	int					i;
	struct s_stock_str	*arr;

	arr = ft_strs_to_tab(ac, av);
	i = 0;
	while (i < ac)
	{
		printf("%d\n", i);
		printf("str: %s\n", arr[i].str);
		printf("copy: %s\n", arr[i].copy);
		printf("size: %d\n", arr[i].size);
		i++;
	}
}*/
