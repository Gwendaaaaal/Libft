/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gholloco <gwendal.hollocou@orange.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:59:10 by gholloco          #+#    #+#             */
/*   Updated: 2023/10/25 12:47:32 by gholloco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		found;
	char		*temp;

	temp = (char *) big;
	i = 0;
	found = 0;
	if (!little)
		return (temp);
	while (i < len && big[i])
	{
		if (big[i] == little[0])
		{
			while (i < len && big[i] == little[found] && big[i])
			{
				i++;
				found++;
				if ((int) found == ft_strlen(little))
					return (&temp[i - found]);
			}
			found = 0;
		}
		i++;
	}
	return (NULL);
}

int main()
{
	printf("%s\n", ft_strnstr("abcdefghi", "def", 10));
	printf("%s", strnstr("abcdefghi", "def", 10));

}
