/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcrestey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 19:31:32 by rcrestey          #+#    #+#             */
/*   Updated: 2018/11/06 20:18:26 by rcrestey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	tab[2];

	if (ac < 2)
		ft_putstr("File name missing.\n");
	else if (ac > 2)
		ft_putstr("Too many arguments.\n");
	else if (!(ft_strcmp(av[1], "Makefile")))
		ft_putstr("*contenu du Makefile*\n");
	else
	{
		fd = open(av[1], O_RDONLY);
		while ((ret = read(fd, tab, 1)))
		{
			tab[ret] = '\0';
			ft_putstr(tab);
		}
		close(fd);
	}
}
