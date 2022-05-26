/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aivanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 22:43:18 by aivanyan          #+#    #+#             */
/*   Updated: 2022/03/22 00:51:22 by aivanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*src_temp;
	char	*dest_temp;

	dest_temp = (char *)dest;
	src_temp = (char *)src;
	if (dest_temp - src_temp <= 0)
		ft_memcpy(dest_temp, src_temp, n);
	else
	{
		while (n > 0)
		{
			dest_temp[n - 1] = src_temp[n - 1];
			n--;
		}
	}
	return (dest_temp);
}
