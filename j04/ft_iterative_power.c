/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/20 16:18:25 by sdurr             #+#    #+#             */
/*   Updated: 2014/08/20 16:43:33 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int puis;

	puis = nb;
	if (power < 0)
		return (0);
	while (power > 1)
	{
		puis = puis * nb;
		power--;
	}
	return (puis);
}
