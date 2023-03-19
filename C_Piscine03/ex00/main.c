/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:39:22 by lde-cast          #+#    #+#             */
/*   Updated: 2023/03/07 17:57:50 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*n1;
	char	*n2;

	n1 = "ABCD";
	n2 = "abcd";
	if (strcmp(n1, n2) < 0)
		printf("n1 is less than n2\n");
	else if (strcmp(n1, n2) > 0)
		printf("n2 is less than n1\n");
	else
		printf("n1 is equals to n2\n");
	return (0);
}
