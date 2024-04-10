/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmet <ahmet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:02:02 by ahmet             #+#    #+#             */
/*   Updated: 2024/04/09 13:12:54 by ahmet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = (const unsigned char *)src;
	unsigned char		*temp;

	d = (unsigned char *)dest;
	temp = malloc(n);
	if (temp == NULL)
		return (NULL);
	ft_memcpy(temp, s, n);
	ft_memcpy(d, temp, n);
	free(temp);
	return (dest);
}
