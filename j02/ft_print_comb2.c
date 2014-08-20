/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uid <sdurr@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/19 16:20:27 by uid               #+#    #+#             */
/*   Updated: 2014/08/19 19:15:11 by uid              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int c)
{
	if (c < 10)
	{
		ft_putchar(c + '0');
	}
	if (c >= 10)
	{
		ft_putnbr(c / 10);
		ft_putnbr(c % 10);
	}
}

void	ft_print(int a, int b)
{
	if (b < 10)
		ft_putchar('0');
	ft_putnbr(b);
	ft_putchar(' ');
	if (a < 10)
		ft_putchar('0');
	ft_putnbr(a);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 00;
	while (a <= 99)
	{
		if (b < 98 && a == 99)
		{
			a = 00;
			b++;
		}
		ft_print(a, b);
		a++;
	}
}
