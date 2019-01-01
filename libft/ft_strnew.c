/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 17:20:19 by dderevyn          #+#    #+#             */
/*   Updated: 2018/10/31 17:49:05 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	++size;
	if (!(str = (char *)malloc((size) * sizeof(char))))
		return (NULL);
	while (size > 0)
	{
		str[size] = '\0';
		--size;
	}
	str[size] = '\0';
	return (str);
}
