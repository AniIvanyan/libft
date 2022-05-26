/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aivanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 00:24:03 by aivanyan          #+#    #+#             */
/*   Updated: 2022/03/14 01:01:26 by aivanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*locate;
	int		i;

	i = 1;
	locate = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			locate = (char *)s;
			i = 0;
			break ;
		}
		s++;
	}
	if (i)
		if ((char)c == '\0')
			locate = (char *)s;
	return (locate);
}
