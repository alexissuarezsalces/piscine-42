/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_x_y.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/20 09:58:51 by sdurr             #+#    #+#             */
/*   Updated: 2014/08/20 19:20:12 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

char	**tab_x_y(char *str, char **carre)
{
     int x;
     int y;
     int i;

     x = 1;
     y = 0;
     i = 0;
	 while (str[i] != '\n')
		 i++;
	 i++;
     while (str[i] != '\0')
     {
		 while (str[i] != '\n')
		 {
			 carre[x][y] = str[i];
			 i++;
			 y++;
		 }
		 carre[x][y] = '\n';
		 y = 0;
		 i++;		
		 x++;
     }
   return (carre);
}
