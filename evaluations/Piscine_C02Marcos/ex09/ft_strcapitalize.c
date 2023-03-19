/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:19:06 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/17 14:42:00 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// char	*ft_strcapitalize(char *str);

// int	main(void)
// {
// 	char	str[200];

// 	sprintf(str, "abc def ghi");
// 	ft_strcapitalize(str);
// 	printf("%s\n", str);
// 	sprintf(str, "salut, comment tu vas ?");
// 	ft_strcapitalize(str);
// 	printf("%s\n", str);
// 	sprintf(str, "42mots quarante-deux; cinquante+et+un");
// 	ft_strcapitalize(str);
// 	printf("%s\n", str);
// 	return (0);
// }

int	ft_char_lowcase(char c)
{
	if (c == '\0')
		return (1);
	if (!(c >= 97 && c <= 122))
		return (0);
	return (1);
}

int	ft_char_upcase(char c)
{
	if (c == '\0')
		return (1);
	if (!(c >= 65 && c <= 90))
		return (0);
	return (1);
}

int	ft_char_alphanum(char c)
{
	if (c == '\0')
		return (1);
	if (!(ft_char_lowcase(c) || ft_char_upcase(c) || (c >= 48 && c <= 57)))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (ft_char_lowcase(str[0]))
		str[0] = str[0] - 32;
	i = 1;
	while (str[i])
	{
		if (!(ft_char_alphanum(str[i - 1])))
		{
			if (ft_char_lowcase(str[i]))
				str[i] = str[i] - 32;
		}
		else
		{
			if (ft_char_upcase(str[i]))
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
