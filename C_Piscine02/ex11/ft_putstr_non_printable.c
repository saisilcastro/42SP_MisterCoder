/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:07:37 by lde-cast          #+#    #+#             */
/*   Updated: 2023/03/18 16:32:29 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

static void	start_special(char *array);
static char	get_hex(char number);
static void	print(char hex[2], char number);

void	ft_putstr_non_printable(char *str)
{
	char	array[10];
	char	special;
	char	hex[2];

	start_special(array);
	special = 0;
	while (*str)
	{
		while (special < 10)
		{
			if (*str == array[(int)special])
			{
				print(hex, array[(int)special]);
				str++;
			}
			special++;
		}
		write(1, str, 1);
		str++;
		special = 0;
	}
	get_hex(15);
}

static void	start_special(char *array)
{
	array[0] = 7;
	array[1] = 8;
	array[2] = 9;
	array[3] = 10;
	array[4] = 11;
	array[5] = 12;
	array[6] = 13;
	array[7] = 34;
	array[8] = 39;
	array[9] = 92;
}

static void	print(char hex[2], char decimal)
{
	hex[1] = get_hex(decimal % 16);
	hex[0] = get_hex(decimal / 16);
	write(1, "\\", 1);
	write(1, &hex[0], 1);
	write(1, &hex[1], 1);
}

static char	get_hex(char number)
{
	return ("0123456789abcdef"[(int)number]);
}
