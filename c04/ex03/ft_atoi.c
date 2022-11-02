/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:19:20 by digoncal          #+#    #+#             */
/*   Updated: 2022/10/09 10:56:01 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	minus;
	int	n;

	minus = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus += 1;
		str++;
	}
	n = 0;
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	if ((minus % 2) != 0)
		n = -n;
	return (n);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("  ---+--+1234ab567"));
}*/
