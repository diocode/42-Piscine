/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:29:20 by digoncal          #+#    #+#             */
/*   Updated: 2022/10/03 16:59:43 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	hexconvert(int x)
{
	int		a;
	int		b;
	char	*base;

	base = "0123456789abcdef";
	a = x / 16;
	b = x % 16;
	write(1, "\\", 1);
	write(1, &base[a], 1);
	write(1, &base[b], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] || (str[i + 1] > 0 && str[i + 1] < 127))
	{
		if (str[i] < 32 || str[i] > 126)
		{
			hexconvert(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
/*int	main(void)
{
	char str[] = "Coucou\ntu v\0as bie\vn ?";
	ft_putstr_non_printable(str);
}*/
