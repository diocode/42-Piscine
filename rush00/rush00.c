/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 10:55:41 by digoncal          #+#    #+#             */
/*   Updated: 2022/09/24 18:28:00 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void	first_last_lines(int length, char first, char middle, char last)
{
	if (length-- >= 1)
	{
		ft_putchar(first);
	}
	while (length-- >= 2 )
	{
		ft_putchar(middle);
	}
	ft_putchar(last);
	ft_putchar('\n');

}

void	middle_lines(int length, int height, char edges)
{
	int	spaces;

	while (height-- > 2)
	{
		ft_putchar(edges);
		spaces = 2;
		while (length > spaces++)
		{
			ft_putchar(' ');
		}
		ft_putchar(edges);
		ft_putchar('\n');
	}
}

void	rush(int length, int height) /* l - length and h - height */
{
		if(length >= 0 && height >= 0)
		{
			if (length >= 1)
			{
				first_last_lines(length, 'o', '-', 'o');
			}
			middle_lines(length, height, '|');
			if (length >= 2)
			{
				first_last_lines(length, 'o', '-', 'o');
			}
		}
}
