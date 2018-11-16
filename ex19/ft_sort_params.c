/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:31:32 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/07 11:34:16 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

void	print_tab(char **av)
{
	int	i;

	i = 0;
	while (av[++i])
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int		main(int ac, char **av)
{
	int		j;
	int		i;

	j = 0;
	while (++j < ac)
	{
		i = 1;
		while (av[++i])
		{
			if (ft_strcmp(av[i - 1], av[i]) > 0)
				ft_swap(&av[i - 1], &av[i]);
		}
	}
	print_tab(av);
}
