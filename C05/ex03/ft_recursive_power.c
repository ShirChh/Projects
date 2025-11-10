/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 05:34:06 by ubuntu            #+#    #+#             */
/*   Updated: 2025/11/10 05:46:45 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power >= 1)
	{
		return (nb * ft_recursive_power(nb, --power));
	}
}

/*#include <stdio.h>

int	main(int argc, char const *argv[])
{
	printf("%d\n", ft_recursive_power(2, 7));
	return (0);
}
*/