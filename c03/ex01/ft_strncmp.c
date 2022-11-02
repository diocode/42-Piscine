/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:17:06 by digoncal          #+#    #+#             */
/*   Updated: 2022/10/08 12:08:49 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && i < (n - 1) && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}
/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char str1[]	= "abcDgd";
	char str2[]	= "abcdefg";

	printf("-------------------\n");
	printf("s1: %s\n", str1);
	printf("s2: %s\n\n",  str2);
	printf("strncmp(): %d\n", strncmp(str1, str2, 3));
	printf("ft_strncmp(): %d\n", ft_strncmp(str1, str2, 3));
	printf("-------------------\n");
	return (0);
}*/
