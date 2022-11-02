/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 10:55:41 by digoncal          #+#    #+#             */
/*   Updated: 2022/09/24 17:56:04 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void	p_limit_lines(int length, char first, char middle, char last)
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

void	p_middle_lines(int length, int height, char edges)
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
				p_limit_lines(length, 'A', 'B', 'A');
			}
			p_middle_lines(length, height, 'B');
			if (length >= 2)
			{
				p_limit_lines(length, 'C', 'B', 'C');
			}
		}
}
