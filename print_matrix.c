/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayala <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:50:06 by nayala            #+#    #+#             */
/*   Updated: 2025/03/01 18:51:46 by ikulik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define SIZE 4

void	print_matrix(int matr[SIZE + 2][SIZE + 2][5])
{
	int		x;
	int		y;
	char	c;

	x = 1;
	y = 1;
	while (y <= SIZE)
	{
		while (x <= SIZE)
		{
			c = matr[x][y][0] + '0';
			write(1, &c, 1);
			if (x < SIZE)
				write(1, " ", 1);
			x++;
		}
		write(1, "\n", 1);
		x = 1;
		y++;
	}
}
