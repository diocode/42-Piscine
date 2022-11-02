/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:56:53 by digoncal          #+#    #+#             */
/*   Updated: 2022/10/09 20:03:04 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	validate(char *base, int lenght)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == '\0' || lenght == 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (j < lenght)
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nb;

	nb = nbr;
	len = 0;
	while (base[len])
		len++;
	if (validate(base, len))
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		if (nb < len)
		{
			write(1, &base[nb], 1);
		}
		if (nb >= len)
		{
			ft_putnbr_base((nb / len), base);
			ft_putnbr_base((nb % len), base);
		}
	}
}
#include <stdio.h>
int		main(void)
{
	ft_putnbr_base(-18, "01");
	printf("\n");
	ft_putnbr_base(35, "diego");
	printf("\n");
	ft_putnbr_base(10, "0123456789");
	printf("\n");
	ft_putnbr_base(53, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(-67, "sdfsdf8989");
	printf("\n");
	ft_putnbr_base(12, "1");
}
