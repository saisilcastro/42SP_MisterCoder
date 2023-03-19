/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:58:35 by lde-cast          #+#    #+#             */
/*   Updated: 2023/03/08 18:57:13 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			nd[100] = "Hello ";
	char			*ns;
	unsigned int	pos;

	ns = " World";
	pos = ft_strlcat(nd, ns, sizeof(nd));
	printf("%s %i\n", nd, pos);
	return (0);
}
