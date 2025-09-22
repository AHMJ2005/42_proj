/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabujwei <aabujwei@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 10:30:27 by aabujwei          #+#    #+#             */
/*   Updated: 2025/09/21 15:16:56 by aabujwei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*new_m;
	int	i;

	new_m = (int *) malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		new_m[i] = f(tab[i]);
		i++;
	}
	return (new_m);
}
