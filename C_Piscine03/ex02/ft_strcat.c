/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:39:30 by lde-cast          #+#    #+#             */
/*   Updated: 2023/03/08 14:57:41 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*update;

	update = dest;
	while (*update)
		update++;
	while (*src)
	{
		*update = *src;
		src++;
		update++;
	}
	dest = update;
	return (dest);
}
