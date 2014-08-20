/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uid <sdurr@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/19 15:54:23 by uid               #+#    #+#             */
/*   Updated: 2014/08/19 16:17:35 by uid              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(char c, char d, char e)
{
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(e);
	if (c != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	else
		ft_putchar('\n');
}

void	ft_print_comb(void)
{
	char c;
	char d;
	char e;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			e = d + 1;
			while (e <= '9')
			{
				ft_print(c, d, e);
				e++;
			}
			d++;
		}
		c++;
	}
}
