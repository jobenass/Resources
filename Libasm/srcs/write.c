/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobenass <jobenass@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 19:45:02 by jobenass          #+#    #+#             */
/*   Updated: 2020/07/08 20:48:13 by jobenass         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/test.h"

void	test_write(int ver, int fd, char *buff, int size)
{
	int ret = 0;
	errno = 0;
	// DISPLAY
	dprintf(1, BLUE "  .. FT_WRITE ..\n");
	dprintf(1, WHITE "");

	if (strcmp(buff, "NULL") == 0)
		buff = 0;
	
	// OFFICIAL
	if (ver == 1)
	{
		ret = write(fd, buff, size);
		dprintf(1, RED "OFF:\t");
		dprintf(1, WHITE "%d\n", ret);
	}
	
	// COPY
	if (ver == 2)
	{
		ret = ft_write(fd, buff, size);
		dprintf(1, GREEN "MINE:\t");
		dprintf(1, WHITE "%d\n", ret);
	}

	// DISPLAY
	dprintf(1, YELLOW "%d\t%s\n", errno, strerror(errno));
}
