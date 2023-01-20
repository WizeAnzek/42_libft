/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugolini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:06:41 by gugolini          #+#    #+#             */
/*   Updated: 2023/01/19 15:06:44 by gugolini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *str, char c)
{
	int	i;
	int	flag;
	int	count;

	i = 0;
	flag = 1;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			flag = 1;
			i++;
		}
		else
		{
			if (flag)
			{
				flag = 0;
				count++;
			}
			i++;
		}
	}
	return (count);
}

static int	make_put_update(char **array, char *slice, char c, int n_p)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (slice[i])
	{
		if (slice[i] == c)
			break ;
		i++;
	}
	str = malloc(i);
	while (j < i)
	{
		str[j] = slice[j];
		j++;
	}
	str[j] = '\0';
	array[n_p] = str;
	return (i);
}

char	**ft_split(char const *str, char c)
{
	int		num_parole;
	int		i;
	char	**array;
	int		n_p;

	num_parole = count_words((char *)str, c);
	array = malloc(8 * (num_parole + 1));
	i = 0;
	n_p = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			i += make_put_update(array, (char *)&str[i], c, n_p);
			n_p++;
		}
	}
	array[n_p] = 0;
	return (array);
}
