/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:05:46 by digoncal          #+#    #+#             */
/*   Updated: 2022/10/11 19:50:58 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	total_size(char **strs, int size, char *sep)
{
	int	i;
	int	t_size;

	i = 0;
	t_size = 0;
	while (i < size)
	{
		t_size += ft_strlen(strs[i]);
		i++;
	}
	if (size == 1)
		return (t_size + ft_strlen(sep));
	return (t_size + ft_strlen(sep) * (size - 1));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	*str;

	if (size <= 0)
		return ((char *) malloc(sizeof(char)));
	str = (char *) malloc(total_size(strs, size, sep) * sizeof(char) + 1);
	k = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < ft_strlen(strs[i]))
			str[k++] = strs[i][j++];
		l = 0;
		while (l < ft_strlen(sep) && i != (size - 1))
			str[k++] = sep[l++];
		i++;
	}
	str[k] = '\0';
	return (str);
}
#include <stdio.h>
int	main(void)
{
	char 	*text[10];
	char	*str;

	text[0] = "This";
	text[1] = "is";
	text[2] = "a";
	text[3] = "test";
	text[4] = "is";
	text[5] = "it";
	text[6] = "working";
	text[7] = "\' - \'";
	text[8] = "?";
	text[9] = "?is it?";

	str = ft_strjoin(10, text, " - ");
	printf("%s\n", str);
	free(str);
}
