/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gholloco <gwendal.hollocou@orange.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 04:24:54 by gholloco          #+#    #+#             */
/*   Updated: 2023/10/24 14:27:10 by gholloco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (*(s + i))
	{
		if (*(s + i) == c)
			return ((char *)(s + i));
		i--;
	}
	if (*(s + i) == c)
		return ((char *)(s + i));
	return (NULL);
}
