/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobenass <jobenass@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 19:45:02 by jobenass          #+#    #+#             */
/*   Updated: 2020/07/08 20:46:54 by jobenass         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/test.h"

void	test_strlen(int ver, char *src)
{
	int ret = 0;
	// DISPLAY
	dprintf(1, BLUE " .. FT_STRLEN ..\n");
	dprintf(1, WHITE "");

	if (strcmp(src, "NULL") == 0)
		src = 0;
	
	// OFFICIAL
	if (ver == 1)
	{
		ret = strlen(src);
		dprintf(1, RED "OFF:\t");
		dprintf(1, WHITE "%d\t", ret);
	}

	// COPY
	if (ver == 2)
	{
		ret = ft_strlen(src);
		dprintf(1, GREEN "MINE:\t");
		dprintf(1, WHITE "%d\t", ret);
	}
	
	// DISPLAY
	dprintf(1, WHITE "\'%s\'\n", src);
}
