/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:05:08 by aamssafi          #+#    #+#             */
/*   Updated: 2022/02/22 15:21:19 by aamssafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_check(char *deep);
char	*ft_update(char *deep);
char	*get_next_line(int fd);
char	*ft_strchr(const char	*s, int c);
int		ft_strlen(const char *s);
char	*ft_strdup(char	*s1);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

#endif