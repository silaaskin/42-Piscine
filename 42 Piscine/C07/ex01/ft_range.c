/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saskin <saskin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:17:09 by saskin            #+#    #+#             */
/*   Updated: 2024/09/05 16:49:24 by saskin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*newarr;
	int	i;

	i = 0;
	if (max <= min)
		return (NULL);
	newarr = (int *)malloc((max - min) * sizeof(int));
	if (!newarr)
		return (NULL);
	while (min < max)
	{
		newarr[i] = min++;
		i++;
	}
	return (newarr);
}
