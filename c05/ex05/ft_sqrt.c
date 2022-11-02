/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:41:36 by digoncal          #+#    #+#             */
/*   Updated: 2022/10/09 15:36:56 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	num;
	long	i;

	num = nb;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 2;
	if (nb >= 2)
	{
		while (i * i <= num)
		{
			if (i * i == num)
				return (i);
			if (i >= 46341)
				return (0);
			i++;
		}
	}
	return (0);
}
/*#include <stdio.h>
int    main(void)
{
	printf("sqrt of %d is %d\n", -2282, ft_sqrt(-2282));
	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\n", 259564321, ft_sqrt(259564321));
        return (0);
}*/
