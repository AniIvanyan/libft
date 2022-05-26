/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aivanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 01:27:39 by aivanyan          #+#    #+#             */
/*   Updated: 2022/03/26 23:35:16 by aivanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*s_temp;
	void		*locate;

	s_temp = s;
	locate = NULL;
	while (n > 0)
	{
		if (*s_temp == (char)c)
		{
			locate = (void *)s_temp;
			break ;
		}
		s_temp++;
		n--;
	}
	return (locate);
}
