/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:12:22 by digoncal          #+#    #+#             */
/*   Updated: 2022/10/11 19:29:12 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	fstrlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	str = (char *) malloc((fstrlen(src) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*#include <stdio.h>
int main(void)
{
	char txt[] = "Hello";
	char *str;

	str = ft_strdup(txt);
	printf("%s\n", str);
	free(str);
}*/
