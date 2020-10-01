/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobenass <jobenass@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 19:45:02 by jobenass          #+#    #+#             */
/*   Updated: 2020/07/09 15:56:07 by jobenass         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/test.h"

void	test_strcmp(int ver, char *s1, char *s2)
{
	int ret = 0;
	// DISPLAY
	dprintf(1, BLUE " .. FT_STRCMP ..\n");
	dprintf(1, WHITE "");
	
	if (strcmp(s1, "NULL") == 0)
		s1 = 0;
	if (strcmp(s2, "NULL") == 0)
		s2 = 0;

	// OFFICIAL
	if (ver == 1)
	{
		ret = strcmp(s1, s2);
		dprintf(1, RED "OFF:\t");
		dprintf(1, WHITE "%d\t", ret);
	}

	// COPY
	if (ver == 2)
	{
		ret = ft_strcmp(s1, s2);
		dprintf(1, GREEN "MINE:\t");
		dprintf(1, WHITE "%d\t", ret);
	}
	
	// DISPLAY
	dprintf(1, WHITE "\'%s\' -vs- \'%s\'\n", s1, s2);
}
