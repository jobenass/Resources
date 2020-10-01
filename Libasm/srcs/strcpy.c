/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobenass <jobenass@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 19:45:02 by jobenass          #+#    #+#             */
/*   Updated: 2020/07/09 13:04:07 by jobenass         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/test.h"

void	test_strcpy(int ver, char *dst, char *src)
{
	// DISPLAY
	dprintf(1, BLUE " .. FT_STRLCPY ..\n");
	dprintf(1, PURPLE "PTR:\t%p\t", dst);
	dprintf(1, PURPLE "\'%s\'\n", dst);
	dprintf(1, WHITE "");

	if (strcmp(dst, "NULL") == 0)
		dst = 0;
	if (strcmp(src, "NULL") == 0)
		src = 0;

	// OFFICIAL
	if (ver == 1)
	{
		strcpy(dst, src);
		dprintf(1, RED "OFF:\t");
		dprintf(1, WHITE "%p\t", dst);
	}
	
	// COPY
	if (ver == 2)
	{
		ft_strcpy(dst, src);
		dprintf(1, GREEN "MINE:\t");
		dprintf(1, WHITE "%p\t", dst);
	}
	
	// DISPLAY
	dprintf(1, WHITE "\'%s\'\n", dst);
}

