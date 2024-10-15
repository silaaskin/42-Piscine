/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:19:16 by saskin            #+#    #+#             */
/*   Updated: 2024/09/05 16:44:05 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	lenght(char *n)
{
	int	i;

	i = 0;
	while (n[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*newsrc;

	i = 0;
	len = lenght(src);
	newsrc = (char *)malloc((len + 1) * sizeof(char));
	if (!(newsrc))
		return (NULL);
	while (src[i])
	{
		newsrc[i] = src[i];
		i++;
	}
	newsrc[i] = '\0';
	return (newsrc);
}
