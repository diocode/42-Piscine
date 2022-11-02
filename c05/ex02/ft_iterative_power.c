/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:18:36 by digoncal          #+#    #+#             */
/*   Updated: 2022/10/05 18:28:45 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		result = nb;
		while (power > 1)
		{
			result *= nb;
			power--;
		}
	}
	return (result);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(10,6));
}*/
