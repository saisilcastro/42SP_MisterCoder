/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:35:25 by lde-cast          #+#    #+#             */
/*   Updated: 2023/03/18 13:17:21 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*update;
	char	pos;
	int		mem[2];

	update = str;
	pos = 0;
	mem[0] = 0;
	mem[1] = 1;
	while (*str && *to_find)
	{
		if (*str == *to_find)
		{
			mem[0] = pos;
			while (*str)
			{
				if (*str == *to_find)
					printf("%c",*str);
				mem[1]++;
				str++;
				to_find++;
			}
			break ;
		}
		if (mem[1] > 0)
			mem[1]++;
		str++;
		pos++;
	}
	if (*to_find)
		return (0);
	update = &update[(int)mem[0]];
	return (update);
}
