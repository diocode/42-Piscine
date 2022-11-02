/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:24:00 by digoncal          #+#    #+#             */
/*   Updated: 2022/10/10 16:02:25 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int	**range, int min, int max)
{
	int	arr_len;
	int	i;
	int	*arr;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	arr_len = max - min;
	arr = (int *) malloc(arr_len * sizeof(int));
	if (!arr)
	{
		*range = 0;
		return (0);
	}
	*range = arr;
	i = 0;
	while (i < arr_len)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr_len);
}
/*#include <stdio.h>
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = -3;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}*/
