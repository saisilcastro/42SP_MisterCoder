/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:17:46 by lde-cast          #+#    #+#             */
/*   Updated: 2023/03/09 11:42:11 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	array[11];
	int	position;
	int	size;

	size = nb;
	if (size < 0)
	{
		write(1, "-", 1);
		size = -nb;
	}
	position = 0;
	while (size > 0)
	{
		array[position] = (size % 10);
		size /= 10;
		position++;
	}
	while (--position >= 0)
	{
		size = array[position] + 48;
		write(1, &size, 1);
	}
}
