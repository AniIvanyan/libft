/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aivanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 17:53:21 by aivanyan          #+#    #+#             */
/*   Updated: 2022/03/22 03:04:45 by aivanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*src_temp;
	char	*dest_temp;
	size_t	i;

	src_temp = (char *)src;
	dest_temp = (char *)dest;
	i = 0;
	while (i < n)
	{
		dest_temp[i] = src_temp[i];
		i++;
	}
	return (dest_temp);
}
