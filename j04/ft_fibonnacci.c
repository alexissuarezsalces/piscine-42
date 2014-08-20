/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonnacci.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/20 19:37:54 by sdurr             #+#    #+#             */
/*   Updated: 2014/08/20 19:49:06 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	return (ft_fibonacci((index - 1)) + ft_fibonacci(index - 2));
}
