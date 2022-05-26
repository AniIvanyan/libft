/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aivanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 01:45:43 by aivanyan          #+#    #+#             */
/*   Updated: 2022/03/26 22:11:14 by aivanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_temp;
	unsigned char	*s2_temp;
	size_t			i;

	s1_temp = (unsigned char *)s1;
	s2_temp = (unsigned char *)s2;
	i = -1;
	while (++i < n)
		if (s1_temp[i] != s2_temp[i])
			return (s1_temp[i] - s2_temp[i]);
	return (0);
}
