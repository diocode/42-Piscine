/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:32:31 by digoncal          #+#    #+#             */
/*   Updated: 2022/10/03 14:30:49 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	result = i;
	dest[i] = '\0';
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (result);
}
/*#include <stdio.h>

int main(void)
{
	char dest[420];
	char str[] = "Bruh";

	printf("%d\n", ft_strlcpy(dest, str, 420));
	printf("%s", dest);
}*/
