/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <anaji-el@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:48:14 by anaji-el          #+#    #+#             */
/*   Updated: 2022/05/22 00:55:29 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
int		max(int* tab, unsigned int len)
{
	int i;
	int tmp;

	i = 0;
	while (i < len - 1)
	{
		if (tab[i] < tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
	return (tab[0]);
}
 int main()
 {
	int hh[4] = {2,6,3,5};
	int len = 4;
	printf("%d",max(hh,len));
 }
*************************

int		max(int	*tab, unsigned int len)
{
	int i;
	int max;
	i  = 0;
	
	if(!tab)
		return(0);
	max = tab[i];
	while(len)
	{
		if(max < tab[i])
			max = tab[i];
		i++;
		len--;
	}
	return(max);
}
 int main()
 {
	 int hh[4] = {2,6,3,5};
	 int len = 4;
	 printf("%d",max(hh,len));
 }