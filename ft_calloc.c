/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gholloco <gwendal.hollocou@orange.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 07:40:15 by gholloco          #+#    #+#             */
/*   Updated: 2023/10/28 05:56:03 by gholloco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*ptr;
	int		malloc_size;

	if ((nmeb * size) / size != nmeb)
		return (NULL);
	malloc_size = nmeb * size;
	ptr = malloc(malloc_size);
	if (ptr != NULL)
		ft_memset(ptr, 0, malloc_size);
	return (ptr);
}
