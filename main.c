/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikulik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:59:59 by ikulik            #+#    #+#             */
/*   Updated: 2025/03/01 18:23:07 by ikulik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

#define SIZE 4

int	main(int argc, char **argv)
{
	int	matrix[SIZE + 2][SIZE + 2][5];
	int	index;

	index = 0;
	while (index < SIZE)
	{
		matrix[0][index + 1][0] = argv[1][index * 2] - '0';
		matrix[SIZE + 1][index + 1][0] = argv[1][index * 2 + SIZE * 2] - '0';
		matrix[index + 1][0][0] = argv[1][index * 2 + SIZE * 4] - '0';
		matrix[index + 1][SIZE + 1][0] = argv[1][index * 2 + SIZE * 6] - '0';
		index++;
	}
	return (0);
}
