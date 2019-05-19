/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzouggar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 16:03:59 by kzouggar          #+#    #+#             */
/*   Updated: 2019/01/13 16:19:43 by kzouggar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int c;
	int l;
	int ascii_diff;

	l = 0;
	while (l < y)
	{
		ascii_diff = 13;
		if (l == 0 || l == y - 1)
			ascii_diff = 0;
		c = 0;
		while (c < x)
		{
			if (c == 0 || c == x - 1)
				ft_putchar('o' + ascii_diff);
			else
				ft_putchar('-' - ascii_diff);
			c++;
		}
		l++;
		ft_putchar('\n');
	}
}
