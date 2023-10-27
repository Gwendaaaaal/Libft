/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gholloco <gwendal.hollocou@orange.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:25:17 by gholloco          #+#    #+#             */
/*   Updated: 2023/10/24 14:29:03 by gholloco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		if (s1 + i > s2 + i)
			return (-1);
		if (s2 + i > s1 + i)
			return (1);
		n--;
		i++;
	}
	return (0);
}

int main(void)
{
	printf("memcmp = %d, ft_memcmp = %d", memcmp("a", "b", 1), ft_memcmp("a", "b", 1));
}
