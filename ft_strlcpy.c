/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gholloco <gwendal.hollocou@orange.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:03:25 by gholloco          #+#    #+#             */
/*   Updated: 2023/09/21 13:07:10 by gholloco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t sz)
{
	int	i;

	i = 0;
	while (sz > 1)
	{
		dst[i] = src[i];
		i++;
		sz--;
	}
	dst[i] = '\0';
	return(ft_strlen(src));
}
