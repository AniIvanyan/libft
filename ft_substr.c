/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aivanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:30:43 by aivanyan          #+#    #+#             */
/*   Updated: 2022/03/23 00:43:55 by aivanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;

	size = ft_strlen(s);
	if (size < len)
		len = size;
	if (start >= size)
		len = 0;
	substr = malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	substr[len] = '\0';
	return (ft_memcpy(substr, s + start, len));
}
