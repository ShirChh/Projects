/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zirui <zirui@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 12:28:08 by zirui             #+#    #+#             */
/*   Updated: 2025/09/15 12:40:05 by zirui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (dest[y])
		y++;
	while (src[i] && i < nb)
	{
		dest[i + y] = src[i];
		i++;
	}
	dest[i + y] = '\0';
	return (dest);
}
