/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merveyil <merveyil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:25:09 by merveyil          #+#    #+#             */
/*   Updated: 2022/12/16 20:16:59 by merveyil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s1 + i) == *((unsigned char *)s2 + i))
			i++;
		else
			return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
	}
	return (0);
}
