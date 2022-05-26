/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aivanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:24:58 by aivanyan          #+#    #+#             */
/*   Updated: 2022/03/23 00:41:28 by aivanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *s2)
{
	int	i;
	int	s1_len;

	s1_len = ft_strlen(s1) - 1;
	i = 0;
	while (ft_strchr(s2, s1[i]))
		i++;
	while (ft_strchr(s2, s1[s1_len]))
		s1_len--;
	return (ft_substr(s1, i, s1_len - i + 1));
}
