/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uid <sdurr@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/19 20:21:10 by uid               #+#    #+#             */
/*   Updated: 2014/08/19 22:57:54 by uid              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_strlen(char *str)
{
	int		cpt;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		cpt++;
	}
	return (cpt);
}

char	*ft_strrev(char *str)
{
	char	*rst;
	int		i;
	int		j;

	j = 0;
	rst = str;	
	i = ft_strlen(str) - 1; 
	while (i != 0)
	{
		rst[j] = str[i];
		i--;
		j++;
	}
	return (rst);
}
