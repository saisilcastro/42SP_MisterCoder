/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:35:21 by lde-cast          #+#    #+#             */
/*   Updated: 2023/03/08 19:06:21 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	pos;
	char			*update;

	update = dest;
	pos = 0;
	while (*update)
	{
		update++;
		pos++;
	}
	while (*src && pos < size)
	{
		*update = *src;
		update++;
		src++;
		pos++;
	}
	dest = update;
	return (pos);
}
