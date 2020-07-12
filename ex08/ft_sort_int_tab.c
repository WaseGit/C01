/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swahb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 18:35:18 by swahb             #+#    #+#             */
/*   Updated: 2020/07/12 18:58:37 by swahb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int a;
	int ps;

	i = 0;
	while (i < size - 1)
	{
		while (a < size - 1 - i)
		{
			if (tab[a] < tab[a + 1])
			{
				ps = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = ps;
			}
			a++;
		}
		i++;
	}
}
