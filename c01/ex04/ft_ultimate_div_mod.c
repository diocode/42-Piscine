/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:26:03 by digoncal          #+#    #+#             */
/*   Updated: 2022/09/26 19:48:31 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	if (b != 0)
	{
		tmp = *a;
		*a = *a / *b;
		*b = tmp % *b;
	}
}

/*int main(void)
{
	int a = 10;
	int b = 2;

	printf("a:%d, b:%d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a:%d, b:%d", a, b);
}*/
