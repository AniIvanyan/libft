/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aivanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 00:57:13 by aivanyan          #+#    #+#             */
/*   Updated: 2022/03/22 19:46:53 by aivanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit_count(long num)
{
	int	count;

	count = (num <= 0);
	while (num)
	{
		count++;
		num /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	long	num;

	num = n;
	count = ft_digit_count(num);
	str = malloc((count + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[count--] = '\0';
	if (num == 0)
		str[count] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[count--] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}
