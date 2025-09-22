/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabujwei <aabujwei@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 11:47:59 by aabujwei          #+#    #+#             */
/*   Updated: 2025/09/22 09:34:28 by aabujwei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	acs;
	int	dacs;

	i = 0;
	acs = 1;
	dacs = 1;
	while (i < length - 1)
	{
		if ((f(tab[i], tab[i + 1]) > 0))
			acs = 0;
		if ((f(tab[i], tab[i + 1]) < 0))
			dacs = 0;
		i++;
	}
	return (acs || dacs);
}
