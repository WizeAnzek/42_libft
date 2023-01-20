/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugolini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:05:28 by gugolini          #+#    #+#             */
/*   Updated: 2023/01/20 15:24:26 by gugolini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print_nb(long nb, int fd)
{
	char	str[10];
	int		i;

	i = 0;
	while (nb > 0)
	{
		str[i] = '0' + nb % 10;
		i++;
		nb = nb / 10;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar_fd(str[i], fd);
		i--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar_fd('-', 1);
		ft_print_nb(nb, fd);
	}
	else if (nb == 0)
		ft_putchar_fd('0', fd);
	else
		ft_print_nb(nb, fd);
}
