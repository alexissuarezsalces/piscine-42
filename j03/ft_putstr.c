/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/20 09:50:00 by sdurr             #+#    #+#             */
/*   Updated: 2014/08/20 09:52:28 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int cpt;

	cpt = 0;
	while (*str != '\0')
	{
		cpt++;
		str++;
	}
	return (cpt);
}

void	ft_putstr(char *str)
{
	write (1, str, ft_strlen(str));
}
