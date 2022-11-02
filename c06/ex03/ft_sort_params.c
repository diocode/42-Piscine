/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:33:20 by digoncal          #+#    #+#             */
/*   Updated: 2022/10/06 12:03:58 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fswap(char **p1, char **p2)
{
	char	*tmp;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void	print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	l1;
	int	l2;
	int	i;

	l1 = 1;
	while (l1 < argc - 1)
	{
		l2 = 1;
		while (l2 < argc - 1)
		{
			if (ft_strcmp(argv[l2], argv[l2 + 1]) > 0)
				fswap(&argv[l2], &argv[l2 + 1]);
			l2++;
		}
		l1++;
	}
	i = 1;
	while (i < argc)
	{
		print_str(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
