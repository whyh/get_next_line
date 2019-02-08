/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strntrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 19:25:53 by dderevyn          #+#    #+#             */
/*   Updated: 2019/02/08 19:39:34 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strntrim(char **str, long long len)
{
	char	*tmp;

	if (len < 0)
	len = (long long)ft_strlen(*str);
	tmp = ft_strndup(*str, len);
	ft_strdel(str);
	*str = tmp;
	return (tmp);
}
