/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:24:17 by ubuntu            #+#    #+#             */
/*   Updated: 2025/11/10 05:33:49 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	total;

	i = 1;
	total = nb;
	while (i < power)
	{
		total = total * nb;
		i++;
	}
	return (total);
}

#include <stdio.h>

int	main(int argc, char const *argv[])
{
	printf("%d\n", ft_recursive_power(2, 5));
	return (0);
}
