/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:10:59 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/06 11:21:08 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int ac, char **av)
{
	int i;
	int j;

	(void)ac;
	i = 0;
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
			ft_putchar(av[i][j]);
		ft_putchar('\n');
	}
}
