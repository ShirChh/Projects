/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zirui <zirui@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:25:07 by zirui             #+#    #+#             */
/*   Updated: 2025/10/07 16:50:11 by zirui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	total;

	i = 1;
	total = 1;
	while (i <= nb)
	{
		total *= i;
		i++;
	}
	return (total);
}

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	/* code */
// 	printf("%d\n", ft_iterative_factorial(5));
// 	return 0;
// }
