/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:09:52 by saskin            #+#    #+#             */
/*   Updated: 2024/09/05 17:21:32 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*sonuc;
	int		i;
	int		x;
	int		c;

	sonuc = malloc(sizeof(strs));
	if (!sonuc)
		return (NULL);
	i = 0;
	c = 0;
	while (i < size)
	{
		x = 0;
		while (strs[i][x] != '\0')
			sonuc[c++] = strs[i][x++];
		x = 0;
		while (sep[x] != '\0' && i != size - 1)
			sonuc[c++] = sep[x++];
		i++;
	}
	sonuc[c] = '\0';
	return (sonuc);
}
