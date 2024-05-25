/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasaad-h <aasaad-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 11:53:31 by hbaddrul          #+#    #+#             */
/*   Updated: 2024/04/11 16:18:00 by aasaad-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	void	*ret;

	ret = b;
	while (len--)
		*(char *)b++ = (unsigned char)c;
	return (ret);
}
