/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aivanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 01:12:39 by aivanyan          #+#    #+#             */
/*   Updated: 2022/03/14 01:17:51 by aivanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
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
		}
		s++;
	}
	if (i)
		if ((char)c == '\0')
			locate = (char *)s;
	return (locate);
}
