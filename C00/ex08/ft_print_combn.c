/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zirui <zirui@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:49:08 by zirui             #+#    #+#             */
/*   Updated: 2025/08/29 12:35:04 by zirui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_arr(int nb, int start, int current, int num[])
{
	int	i;
	int	j;

	if (current == nb)
	{
		i = 0;
		while (i <= nb)
		{
			ft_putchar(num[i] + '0');
			i++;
		}
		if (num[0] != 10 - nb)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	j = start;
	while (j <= (10 - (nb - current)))
	{
		num[current] = j;
		print_arr(nb, j + 1, current + 1, num);
		j++;
	}
}

void	ft_print_combn(int nb)
{
	int	num[10];

	if (nb > 0 && nb < 10)
	{
		print_arr(nb, 0, 0, num);
	}
	else
		return ;
}

/* int main(int argc, char const *argv[])
{
	ft_print_combn(2);
	return 0;
} */
