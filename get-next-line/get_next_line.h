/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasaad-h < aasaad-h@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:58:10 by aasaad-h          #+#    #+#             */
/*   Updated: 2024/05/26 16:02:22 by aasaad-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
int		ft_strlen(const char *str);
void	*ft_calloc(int count, int size);
int		ft_strchr(const char *s, int c);
int		check_nl(char *ln);
char	*copy_line(char *ans, char *ln);
char	*shift_ln(char *ln);

#endif
