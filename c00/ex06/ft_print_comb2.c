/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:01:14 by digoncal          #+#    #+#             */
/*   Updated: 2022/09/22 17:21:50 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write(char n)
{
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (a++ < 98)
	{
		b = a;
		while (b++ < 99)
		{
			ft_write((a / 10) + '0');
			ft_write((a % 10) + '0');
			ft_write(' ');
			ft_write((b / 10) + '0');
			ft_write((b % 10) + '0');
			if (a != 98)
			{
				ft_write(',');
				ft_write(' ');
			}
		}
	}
}
