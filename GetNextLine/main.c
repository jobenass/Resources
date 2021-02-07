/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jobenass <jobenass@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/30 11:56:30 by jobenass     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/19 15:52:13 by jobenass    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

// - - - - TEST - TEST - TEST - TEST - TEST - TEST
// Valeur de FD non definie par un open = GNL fonction?
// Appel entremele de FD?
// Envoie d'un line malloc, free dans GNL?


#include "get_next_line_bonus.h"
#include "get_next_line.h"

#include <stdio.h>
#include <unistd.h>

int		get_next_line(int fd, char **line);

int		main(int argc, char **argv)
//int		main(void)
{
//	int		fd;
	int		fd1;
	int		fd2;
	int		fd3;
	int		ret;
	int		i;
	char	*line;

	line = 0;
	i = 1;
	ret = 1;
	fd1 = open("../tests/fables.txt", O_RDONLY);
//	fd = open("../tests/test_vide.txt", O_RDONLY);
	printf(" [[[ FD == %d]]]\n", fd1);
	while (ret > 0)
	{
		ret = get_next_line(fd1, &line);
		printf("%d - (%d) : \'%s\'\n", i++, ret, line);
		free(line);
	}
	ret = 1;
//	fd = open("../tests/fichier.txt", O_RDONLY);
	fd2 = open("../tests/fichier.txt", O_RDONLY);
	printf(" [[[ FD == %d]]]\n", fd2);
	while (ret > 0)
	{
		ret = get_next_line(fd2, &line);
		printf("%d - (%d) : \'%s\'\n", i++, ret, line);
		free(line);
	}
	ret = 1;
//	fd = open("../tests/fables.txt", O_RDONLY);
	fd3 = open("../tests/short_bible.txt", O_RDONLY);
	printf(" [[[ FD == %d]]]\n", fd3);
	while (ret > 0)
	{
		ret = get_next_line(fd3, &line);
		printf("%d - (%d) : \'%s\'\n", i++, ret, line);
		free(line);
	}
	if (close(fd1) == -1)
		return (-1);
	if (close(fd2) == -1)
		return (-1);
	if (close(fd3) == -1)
		return (-1);
	return (0);
}

// int		main(void)
// {
// 	int		fd1;
// 	int		fd2;
// 	int		fd3;
// 	int		ret;
// 	int		i;

// 	char	*line;

// 	line = 0;
// 	ret = 1;
// 	i = 0;
// 	fd1 = open("../tests/timmy_test_interleave.txt", O_RDONLY);
// 	fd2 = open("../tests/timmy_test_a.txt", O_RDONLY);
// 	fd3 = open("../tests/timmy_test_b.txt", O_RDONLY);

// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd2, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd2 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd2, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd2 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd1, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd1 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd2, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd2 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd2, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd2 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd2, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd2 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd2, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd2 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd3, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd3 , ret, line);
// 	free(line);
// 	ret = get_next_line(fd2, &line);
// 	printf("FD => %d (%d) : \'%s\'\n",fd2 , ret, line);
// 	free(line);

// 	if (close(fd1) == -1)
// 		return (-1);
// 	if (close(fd2) == -1)
// 		return (-1);
// 	if (close(fd3) == -1)
// 		return (-1);
// 	return (0);
// }
