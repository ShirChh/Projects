/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zirui <zirui@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 09:27:23 by zirui             #+#    #+#             */
/*   Updated: 2025/09/22 12:05:33 by zirui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_check_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-')
				return (1);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (1);
	else
		return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	box[32];
	long	nb;
	int		base_len;
	int		i;

	if (ft_check_valid(base) == 1)
		return ;

	nb = nbr;
	if (nbr < 0)
	{
		nb *= -1;
		ft_putchar("-");
	}

	base_len = ft_strlen(base);
	i = 0;
	while (nb < 0)
	{
		box[i] = base[nb % base_len];
		nb = nb / base_len;
		i++;
	}
	while (--i >= 0)
		ft_putchar(box[i]);
}
