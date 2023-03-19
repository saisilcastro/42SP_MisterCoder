/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:33:51 by marvin            #+#    #+#             */
/*   Updated: 2023/03/18 16:19:25 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	long int	number;
	int			array[11];
	int			pos;

	number = nb;
	if (nb < 0)
	{
		number = number * -1;
		write(1, "-", 1);
	}
	pos = 0;
	while (number > 0)
	{
		array[pos++] = number % 10;
		number /= 10;
	}
	while (--pos >= 0)
	{
		number = array[pos] + 48;
		write(1, &number, 1);
	}
}
