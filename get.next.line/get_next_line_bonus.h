/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-saa <abin-saa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:23:46 by abin-saa          #+#    #+#             */
/*   Updated: 2022/06/26 09:11:19 by abin-saa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int		ft_strlen(const char *input);
char	*ft_strchr(const char *s, int c);
char	*ft_str_init(void);
char	*ft_strjoin_mod(char *s1, char *s2);
char	*ft_read(int fd, char *str);
char	*ft_skip(char *str);
char	*ft_line(char *str);
char	*get_next_line(int fd);

#endif