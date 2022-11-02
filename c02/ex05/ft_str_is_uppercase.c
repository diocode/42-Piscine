/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:16:54 by digoncal          #+#    #+#             */
/*   Updated: 2022/09/28 14:20:00 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*#include <stdio.h>

int main(void)
{
	char str[] = "H";
	printf("%i", ft_str_is_uppercase(str));
}*/
