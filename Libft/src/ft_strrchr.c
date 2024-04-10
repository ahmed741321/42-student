/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmet <ahmet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:02:25 by ahmet             #+#    #+#             */
/*   Updated: 2024/04/09 13:02:26 by ahmet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occurrence = NULL;

	while (*s)
	{
		if (*s == (char)c)
			last_occurrence = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return ((char *)last_occurrence);
}
