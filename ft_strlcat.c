/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aivanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 23:32:55 by aivanyan          #+#    #+#             */
/*   Updated: 2022/03/22 20:11:32 by aivanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	src_size;
	size_t	dest_size;

	src_size = ft_strlen(src);
	dest_size = ft_strlen(dest);
	if (dest_size >= size)
		return (src_size + size);
	else
	{
		if (src_size < size - dest_size)
			ft_memcpy(dest + dest_size, src, src_size + 1);
		else
		{
			ft_memcpy(dest + dest_size, src, size - dest_size - 1);
			dest[size - 1] = '\0';
		}
		return (dest_size + src_size);
	}
}
