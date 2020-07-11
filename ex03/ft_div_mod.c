/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swahb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 17:34:40 by swahb             #+#    #+#             */
/*   Updated: 2020/07/09 17:40:34 by swahb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_div_mod(int a, int b, int *div, int *mod)
{
	int i;
	int j;

	i = a / b;
	j = a % b;
	*div = i;
	*mod = j;
}
