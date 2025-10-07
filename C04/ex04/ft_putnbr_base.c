/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zirui <zirui@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 09:27:23 by zirui             #+#    #+#             */
/*   Updated: 2025/10/07 16:05:36 by zirui            ###   ########.fr       */
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
		ft_putchar('-');
	}
	base_len = ft_strlen(base);
	i = 0;
	if (nb == 0)
		box[i++] = base[0];
	while (nb > 0)
	{
		box[i] = base[nb % base_len];
		nb = nb / base_len;
		i++;
	}
	while (--i >= 0)
		ft_putchar(box[i]);
}

void ft_put_newline(void)
{
    write(1, "\n", 1);
}

int main(void)
{
    // Test 1: Decimal (Base 10)
    ft_putnbr_base(42, "0123456789"); // Should print 42
    ft_put_newline();

    // Test 2: Binary (Base 2)
    ft_putnbr_base(12, "01"); // Should print 1100
    ft_put_newline();

    // Test 3: Hexadecimal (Base 16)
    ft_putnbr_base(255, "0123456789ABCDEF"); // Should print FF
    ft_put_newline();

    // Test 4: Negative number
    ft_putnbr_base(-42, "0123456789"); // Should print -42
    ft_put_newline();

    // Test 5: Invalid base (should print nothing)
    ft_putnbr_base(123, "0012");
    ft_putnbr_base(123, "+012");
    ft_put_newline();

    return (0);
}
