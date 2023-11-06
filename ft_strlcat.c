/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 04:39:08 by gholloco          #+#    #+#             */
/*   Updated: 2023/10/28 05:50:44 by gholloco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (size <= 0)
		return (0);
	while (dst[i])
		i++;
	while (src[j] && size > 0)
	{
		dst[i] = src[j];
		i++;
		j++;
		size--;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}

int main() {
	char	*dst = malloc(sizeof(char) * 12);

	dst[0] = '1';
	dst[1] = '2';
	dst[2] = '3';
	dst[3] = '4';
	dst[4] = '5';
	dst[5] = '6';
	dst[6] = 0;
	printf("dst = %s\n", dst);
	ft_strlcat(dst, "78910", 12);
	printf("and then -> dst =  %s\n", dst);
	free(dst);
}
