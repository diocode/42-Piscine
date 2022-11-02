/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:28:24 by digoncal          #+#    #+#             */
/*   Updated: 2022/10/11 19:47:06 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
		return (NULL);
	arr = (int *) malloc((max - min) * sizeof(int));
	i = 0;
	while ((min + i) < max)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
/*#include <stdio.h>
int	main(void)
{
	int	i;
	int	*arr;

	arr = ft_range(-3, 10);
	i = 0;
	while (i < 11)
	{
		printf("%d ", arr[i]);
		i++;
	}
}*/
