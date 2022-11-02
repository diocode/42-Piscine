/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pealexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 09:41:24 by pealexan          #+#    #+#             */
/*   Updated: 2022/10/02 15:17:44 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putstr(char *str);

int	ft_verifnbrs2(char *nbrs)
{
	int	a;
	int	four;

	a = 0;
	four = 0;
	while (nbrs[a])
	{
		if (nbrs[a] == '4')
			four++;
		if (four > 4)
		{
			ft_putstr("Invalid numbers\n");
			return (0);
		}
		a++;
	}
	return (0);
}

int	ft_verifnbrs(char *nbrs, int a)
{
	int	one;
	int	two;
	int	three;

	one = 0;
	two = 0;
	three = 0;
	a = 0;
	while (nbrs[a])
	{
		if (nbrs[a] == '1')
			one++;
		else if (nbrs[a] == '2')
			two++;
		else if (nbrs[a] == '3')
			three++;
		if (one > 4 || two > 8 || three > 8)
		{
			ft_putstr("Invalid numbers\n");
			return (0);
		}
	a++;
	}
	ft_verifnbrs2(nbrs);
	return (0);
}

int	ft_verifstr2(char *nbrs, int a)
{
	if (a != 31 || (a % 2 == 0 && nbrs[a] == ' '))
	{
		ft_putstr("Invalid string\n");
		return (0);
	}
	ft_verifnbrs(nbrs, a);
	return (0);
}

int	ft_verifstr(int argnb, char *nbrs)
{
	int	a;

	a = 0;
	if (argnb != 2 || *nbrs == '\0')
	{
		ft_putstr("Invalid string\n");
		return (0);
	}
	while (nbrs[a] != '\0')
	{
		if ((nbrs[a] != ' ' && nbrs[a] != '1' && nbrs[a] != '2'
				&& nbrs[a] != '3' && nbrs[a] != '4'))
		{
			ft_putstr("Invalid string\n");
			return (0);
		}
		else if ((a % 2 != 0) && nbrs[a] != ' ')
		{
			ft_putstr("Invalid string\n");
			return (0);
		}
		a++;
	}
	ft_verifstr2(nbrs, a);
	return (0);
}
