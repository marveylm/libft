/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merveyil <merveyil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:48:56 by merveyil          #+#    #+#             */
/*   Updated: 2022/12/16 17:06:40 by merveyil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	size_t	k;
	char	*pt;

	pt = (char *)src;
	k = 0;
	i = 0;
	while (i <= n)
	{
	((unsigned char *)dst)[i] = pt[k];
	i++;
	pt++;
	}
	return (dst);
}
