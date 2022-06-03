/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlalouli <mlalouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 10:20:40 by fpetras           #+#    #+#             */
/*   Updated: 2022/05/10 14:12:24 by mlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
int main ()
{
	char *s;

	s = "salam";
	printf ("%d", ft_strlen(s));
}
