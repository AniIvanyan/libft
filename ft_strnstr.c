/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aivanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 02:50:42 by aivanyan          #+#    #+#             */
/*   Updated: 2022/03/22 18:45:54 by aivanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	char	*temp;
	char	*needle_temp;
	size_t	tmp;

	needle_temp = needle;
	if (*needle_temp == '\0')
		return (haystack);
	while (*haystack && len > 0)
	{
		if (*haystack == *needle_temp)
		{
			temp = haystack;
			tmp = 0;
			while (*temp == *needle_temp && tmp++ < len)
			{
				if (*(needle_temp++ + 1) == '\0')
					return (haystack);
				temp++;
			}
			needle_temp = needle;
		}
		haystack++;
		len--;
	}
	return (NULL);
}
