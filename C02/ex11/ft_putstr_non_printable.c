/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zirui <zirui@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 12:50:12 by zirui             #+#    #+#             */
/*   Updated: 2025/09/19 13:39:39 by zirui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_xdigit(unsigned char c)
{
	char	*xdigit;

	xdigit = "0123456789abcdef";
	ft_putchar(xdigit[c / 16]);
	ft_putchar(xdigit[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			ft_putchar('\\');
			ft_xdigit(str[i]);
			i++;
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char const *argv[])
{
	char *str = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return 0;
}

