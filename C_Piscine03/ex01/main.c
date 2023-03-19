/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:58:35 by lde-cast          #+#    #+#             */
/*   Updated: 2023/03/08 14:15:30 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	int	res;

	res = ft_strncmp("abc", "ABC", 3);
	if (res < 0)
		printf("n1 is less than n2\n");
	else if (res > 0)
		printf("n2 is less than n1\n");
	else
		printf("n1 is equals to n2\n");
	return (0);
}
