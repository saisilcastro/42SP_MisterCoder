/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:17:54 by lde-cast          #+#    #+#             */
/*   Updated: 2023/03/09 15:05:43 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str);
void	verify(char **str, int *minus, int *pos, char *array);
int		ft_exp(int max);

int	ft_atoi(char *str)
{
	char	array[11];
	int		minus;
	int		pos;
	int		max;
	int		decimal;

	minus = 0;
	pos = 0;
	while (*str && pos == 0)
		verify(&str, &minus, &pos, array);
	max = pos;
	decimal = 0;
	while (pos-- > 0)
		decimal += ft_exp(max - pos) * array[pos];
	if (minus)
		decimal = -decimal;
	return (decimal);
}

void	verify(char **str, int *minus, int *pos, char *array)
{
	if (**str == '-')
		*minus = 1;
	if (**str > 47 && **str < 57)
	{
		while (**str > 47 && **str < 58)
		{
			array[*pos] = **str - 48;
			(*str)++;
			(*pos)++;
		}
	}
	(*str)++;
}

int		ft_exp(int max)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (i < max)
	{
		if (i > 0)
			n *= 10;
		i++;
	}
	return (n);
}
