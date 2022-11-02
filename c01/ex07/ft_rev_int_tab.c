/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:31:49 by digoncal          #+#    #+#             */
/*   Updated: 2022/10/01 15:31:26 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	max;

	i = 0;
	tmp = 0;
	max = size - 1;
	while (i != (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[max];
		tab[max] = tmp;
		i++;
		max--;
	}
}

int main(void)
{
	int n = 0;
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	ft_rev_int_tab(arr, 9);
	while(n <= 8)
	{
		printf("%i ", arr[n]);
		n++;
	}
}
