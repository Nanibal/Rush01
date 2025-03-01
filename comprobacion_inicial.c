/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comprobacion_inicial.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 13:26:21 by nayala            #+#    #+#             */
/*   Updated: 2025/03/01 17:58:56 by nayala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	comprobacion_4x4(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (str[0] == '\0')
	{
		j = 1;
	}
	while (str[i] != '\0')
	{
		if (i % 2 != 0 && str[i] != ' ')
		{
			j = 1;
		}
		if (i % 2 == 0 && !(str[i] >= '1' && str[i] <= '4'))
		{
			j = 1;
		}
		i++;
	}
	if (j == 1 || i != 31)
	{
		write(1, "Error\n", 6);
	}
}
/*
void	comprobacion_9x9(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (str[0] == '\0')
	{
		j = 1;
	}
	while (str[i] != '\0')
	{
		if (i % 2 != 0 && str[i] != ' ')
		{
			j = 1;
		}
		if (i % 2 == 0 && !(str[i] >= '1' && str[i] <= '9'))
		{
			j = 1;
		}
		i++;
	}
	if (j == 1 || i != 89)
	{
		write(1, "Error\n", 6);
	}
}
*/
int	main(int arg, char **argv)
{
	comprobacion_4x4(argv[1]);
	//comprobacion_9x9(argv[1]);
	return (0);
}
