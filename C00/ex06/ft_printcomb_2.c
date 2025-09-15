/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcomb_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zirui <zirui@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:53:27 by zirui             #+#    #+#             */
/*   Updated: 2025/08/19 13:29:01 by zirui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	break_condition(void)
{
	write(1, "98 99\n", 6);
}

void	print_num(char fstdig, char secdig, char trddig, char frtgit)
{
	write(1, &fstdig, 1);
	write(1, &secdig, 1);
	write(1, " ", 1);
	write(1, &trddig, 1);
	write(1, &frtgit, 1);
	write(1, ", ", 2);
}

void	ft_print_comb_2(void)
{
	char	fstdigit;
	char	scddigit;
	char	trddigit;
	char	frtdigit;

	fstdigit = '0';
	scddigit = '0';
	trddigit = '0';
	frtdigit = '0';
	while (fstdigit <= '9')
	{
		while (scddigit <= '9')
		{
			if (scddigit == '8' && fstdigit == '9')
			{
				break_condition();
				break ;
			}
			while (trddigit <= '9')
			{
				while (frtdigit <= '9')
				{
					print_num(fstdigit, scddigit, trddigit, frtdigit);
					frtdigit++;
				}
				frtdigit = '0';
				trddigit++;
			}
			trddigit = '0';
			scddigit++;
		}
		scddigit = '0';
		fstdigit++;
	}
}

/* #include <stdio.h>

int main(void)
{
	ft_print_comb_2();
	return 0;
} */
