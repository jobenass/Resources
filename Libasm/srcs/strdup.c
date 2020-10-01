/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobenass <jobenass@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 19:45:02 by jobenass          #+#    #+#             */
/*   Updated: 2020/07/09 14:30:59 by jobenass         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/test.h"

void	test_strdup(int ver, char *src)
{
	char *ret = 0;
	// DISPLAY
	dprintf(1, BLUE "  .. FT_STRDUP ..\n");
	dprintf(1, PURPLE "PTR:\t%p\t\t", ret);
	dprintf(1, PURPLE "\'%s\'\n", ret);
	dprintf(1, WHITE "");

	if (strcmp(src, "NULL") == 0)
		src = 0;
	
	// OFFICIAL
	if (ver == 1)
	{
		ret = strdup(src);
		dprintf(1, RED "OFF:\t");
		dprintf(1, WHITE "%p\t", ret);
	}

	// COPY
	if (ver == 2)
	{
		ret = ft_strdup(src);
		dprintf(1, GREEN "MINE:\t");
		dprintf(1, WHITE "%p\t", ret);
	}

	// DISPLAY
	dprintf(1, WHITE "\'%s\'\n", ret);
	dprintf(1, YELLOW "%d\t%s\n", errno, strerror(errno));
}
