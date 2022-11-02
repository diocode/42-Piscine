/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:23:46 by digoncal          #+#    #+#             */
/*   Updated: 2022/10/08 12:11:16 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char str1[]	= "aaadfsfsf";
	char str2[]	= "aaab";

	printf("-------------------\n");
	printf("s1: %s\n", str1);
	printf("s2: %s\n\n",  str2);
	printf("strcmp(): %d\n", strcmp(str1, str2));
	printf("ft_strcmp(): %d\n", ft_strcmp(str1, str2));
	printf("-------------------\n");
	return (0);
}*/
