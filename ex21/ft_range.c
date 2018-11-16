/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:07:54 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/06 15:33:16 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
		return (0);
	if (!(tab = (int *)malloc(sizeof(*tab) * (max - min))))
		return (0);
	i = -1;
	while (min < max)
		tab[++i] = min++;
	return (tab);
}
