/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:27:53 by digoncal          #+#    #+#             */
/*   Updated: 2022/10/01 17:31:07 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	count;

	count = 0;
	while (count < (size - 1))
	{
		if (tab[count] > tab[count + 1])
		{
			tmp = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = tmp;
			count = 0;
		}
		else
		{
			count ++;
		}
	}
}

/*#include <stdio.h>
int	main(void)
{
	int arr[] = {4, 5, 1, 7, 0, 8, 7, -3};
	ft_sort_int_tab(arr, 8);

	int i = 0;
	while (i <= 7)
	{
		printf("%d", arr[i]);
		i++;
	}
}*/
