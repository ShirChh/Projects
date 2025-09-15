/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zirui <zirui@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:06:57 by zirui             #+#    #+#             */
/*   Updated: 2025/08/19 14:26:34 by zirui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
    char total;
    if(nb == -2147483648)
    {
        write(1, "-2147483648", 12);
        return;
    }
    if(nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    if (nb >= 10)
        ft_putnbr(nb / 10);
    total = nb % 10 + '0';
    write(1, &total, 1);
}

int main(int argc, char const *argv[])
{
    ft_putnbr(-21478);
    write(1, "\n", 1);
    return 0;
}
