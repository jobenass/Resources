/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobenass <jobenass@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 19:09:26 by jobenass          #+#    #+#             */
/*   Updated: 2020/07/10 18:15:27 by jobenass         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef	TEST_H
# define TEST_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>

# define BLUE "\x1B[1;34m"
# define GREEN "\x1B[1;32m"
# define RED "\x1B[1;31m"
# define PURPLE "\x1B[1;35m"
# define YELLOW "\x1B[1;33m"
# define WHITE "\x1B[0;37m"

char    	**ft_split(char const *s, char c);
void    	ft_tabstrdel(char **str);

void	    test_strlen(int ver, char *src);
void	    test_strcpy(int ver, char*dst, char *src);
void	    test_strcmp(int ver, char *s1, char *s2);
void	       test_strdup(int ver, char *src);
void	    test_write(int ver, int fd, char *buff, int size);
void    	test_read(int ver, int fd, char *buff, int size);

int			ft_strlen(const char *str);
char        *ft_strcpy(char *dst, const char *src);
int			ft_strcmp(const char *s1, const char *s2);
ssize_t		ft_write(int fd, const void *buf, size_t nbyte);
ssize_t		ft_read(int fd, void *buf, size_t nbyte);
char 		*ft_strdup(const char *s1);

#endif