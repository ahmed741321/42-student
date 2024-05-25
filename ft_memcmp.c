/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasaad-h <aasaad-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 18:00:02 by hbaddrul          #+#    #+#             */
/*   Updated: 2024/04/11 16:18:06 by aasaad-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		++s1;
		++s2;
	}
	return (0);
}
