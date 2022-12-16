/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merveyil <merveyil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:45:53 by merveyil          #+#    #+#             */
/*   Updated: 2022/12/14 17:46:51 by merveyil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	char	*p;

	p = (char *)str;
	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return (str);
}
