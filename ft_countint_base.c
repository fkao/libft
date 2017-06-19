/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countint_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkao <fkao@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 11:56:41 by fkao              #+#    #+#             */
/*   Updated: 2017/06/14 13:13:31 by fkao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countint_base(int n, size_t base)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		if (base == 10 || n == 0)
			len++;
	while (n)
	{
		len++;
		n /= (int)base;
	}
	return (len);
}
