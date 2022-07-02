/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-saa <abin-saa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:48:16 by abin-saa          #+#    #+#             */
/*   Updated: 2022/06/25 15:49:20 by abin-saa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_strlen(const char *input);
char	*ft_strchr(const char *s, int c);
char	*ft_str_init(void);
char	*ft_strjoin_mod(char *s1, char *s2);
char	*ft_read(int fd, char *str);
char	*ft_skip(char *str);
char	*ft_line(char *str);
char	*get_next_line(int fd);

#endif
