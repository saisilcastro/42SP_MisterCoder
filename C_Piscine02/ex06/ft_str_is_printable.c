/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:35:49 by lde-cast          #+#    #+#             */
/*   Updated: 2023/03/08 16:33:21 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	start_special(int *array);

int	ft_str_is_printable(char *str)
{
	int		array[11];
	int		pos;

	start_special(array);
	pos = 0;
	while (*str)
	{
		while (pos < 11)
		{
			if (*str == array[pos])
				return (0);
			pos++;
		}
		str++;
		pos = 0;
	}
	return (1);
}

void	start_special(int *array)
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
	array[9] = 63;
	array[10] = 92;
}
