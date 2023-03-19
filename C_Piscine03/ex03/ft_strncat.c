/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:33:47 by lde-cast          #+#    #+#             */
/*   Updated: 2023/03/08 16:40:10 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*update;
	unsigned int	pos;

	update = dest;
	while (*update)
		update++;
	pos = 0;
	while (*src && pos < nb)
	{
		*update = *src;
		src++;
		update++;
		pos++;
	}
	dest = update;
	return (dest);
}
