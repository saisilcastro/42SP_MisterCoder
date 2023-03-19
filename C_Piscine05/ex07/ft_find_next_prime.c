/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-cast <lde-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:48:24 by lde-cast          #+#    #+#             */
/*   Updated: 2023/03/17 15:00:20 by lde-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nb_is_prime(int current, int nb)
{
	while (++current < nb)
	{
		if (nb % current == 0)
		{
			return (0);
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int		current;
	int		last;
	char	prime;

	current = 1;
	prime = nb_is_prime(current, nb);
	if (prime == 1 && nb > 1)
		return (nb);
	last = 1;
	while (!prime)
	{
		current = 1;
		while (++current < nb + last)
		{
			if ((nb + last) % current == 0)
				break ;
		}
		if (current == nb + last)
			prime = 1;
		last++;
	}
	return (current);
}
