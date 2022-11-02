/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:20:48 by digoncal          #+#    #+#             */
/*   Updated: 2022/10/03 12:11:49 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (32 <= str[i] && str[i] <= 127)
			i++;
		else
			return (0);
	}
	return (1);
}
/*#include <stdio.h>

int main(void)
{
	char str[20] = "Hello";
	char n = 10;
	str[5] = n;
	printf("%i", ft_str_is_printable(str));
}*/
