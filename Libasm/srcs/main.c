/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobenass <jobenass@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 19:45:02 by jobenass          #+#    #+#             */
/*   Updated: 2020/07/08 20:36:32 by jobenass         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/test.h"

int		version(char *av)
{
	if (!av)
		return (-1);
	char *arg = "off cpy";
	char **tab = ft_split(arg, ' ');
	int ret = -1;
	int i = -1;
	while (tab[++i])
		if (strcmp(av, tab[i]) == 0)
			ret = i + 1;
	ft_tabstrdel(tab);
	return (ret);
}

int		arguments(char *av)
{
	if (!av)
		return (-1);
	char *arg = "strlen strcpy strcmp strdup write read";
	char **tab = ft_split(arg, ' ');
	int ret = -1;
	int i = -1;
	while (tab[++i])
		if (strcmp(av, tab[i]) == 0)
			ret = (i + 1);
	ft_tabstrdel(tab);
	return (ret);
}

int		main(int ac, char **av)
{
	int fd = 0;
	int	id_test = arguments(av[1]);
	int	id_version = version(av[2]);
	if (id_test == -1 || id_version == -1)
		dprintf(1, RED "Error\nInvalid functions or version!\n");
	else if (((id_test == 1 || id_test == 4) && ac == 4)
	|| ((id_test == 2 || id_test == 3) && ac == 5))
	{
		if (id_test == 1)
			test_strlen(id_version, av[3]);
		else if (id_test == 2)
			test_strcpy(id_version, av[3], av[4]);
		else if (id_test == 3)
			test_strcmp(id_version, av[3], av[4]);
		else if (id_test == 4)
			test_strdup(id_version, av[3]);
	}
	else if ((id_test == 5 && ac == 6)
	|| (id_test == 6 && ac == 6))
	{
		if (strcmp(av[3], "FD") == 0)
			fd = open("./file.txt", O_RDWR);
		else
			fd = atoi(av[3]);
		if (id_test == 5)
			test_write(id_version, fd, av[4], atoi(av[5]));
		else if (id_test == 6)
			test_read(id_version, fd, av[4], atoi(av[5]));
		close(fd);
	}
	else
		dprintf(1, RED "Error\nInvalid arguments!\n");
	return (0);
}