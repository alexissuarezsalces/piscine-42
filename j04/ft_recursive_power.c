/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/20 16:44:51 by sdurr             #+#    #+#             */
/*   Updated: 2014/08/20 19:35:18 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0 || nb < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 0)
	{
		return ((nb * ft_recursive_power(nb, (power - 1))));
	}
	return (0);
}
