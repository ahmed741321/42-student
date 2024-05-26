/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaad- <aassaad-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 18:47:25 by aassaad-          #+#    #+#             */
/*   Updated: 2024/05/25 15:26:51 by aassaad-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*shift_ln(char *ln)
{
	int		i;
	int		nl;
	char	*ret;

	i = 0;
	nl = ft_strchr(ln, '\n') + 1;
	ret = ft_calloc(BUFFER_SIZE + 1, 1);
	while (nl < BUFFER_SIZE && ln[nl] != '\0')
		ret[i++] = ln[nl++];
	free(ln);
	if (*ret == '\0')
	{
		free(ret);
		return (NULL);
	}
	return (ret);
}

char	*get_next_line(int fd)
{
	static char	*ln;
	char		*ans;
	int			ret;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	ans = copy_line(NULL, ln);
	while (check_nl(ln) < 1)
	{
		free(ln);
		ln = ft_calloc(BUFFER_SIZE + 1, 1);
		ret = read(fd, ln, BUFFER_SIZE);
		if (ret <= 0)
		{
			free(ln);
			ln = NULL;
			if (ans != NULL && ret != -1)
				return (ans);
			free(ans);
			return (NULL);
		}
		ans = copy_line(ans, ln);
	}
	ln = shift_ln(ln);
	return (ans);
}
