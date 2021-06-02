/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 19:26:06 by arguilla          #+#    #+#             */
/*   Updated: 2021/02/16 13:16:07 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif
# define FDMAX 257

size_t	ft_strlen_g(const char *s);
int		check_line(char *str);
char	*ft_substr_g(char const *s, unsigned int start, size_t len);
void	assign(char *r, char const *s, size_t *i);
char	*ft_strjoin_g(char const *s1, char const *s2);
int		get_next_line(int fd, char **line);

#endif
