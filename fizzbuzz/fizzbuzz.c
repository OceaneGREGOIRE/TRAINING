/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 17:35:55 by ogregoir          #+#    #+#             */
/*   Updated: 2023/04/24 09:12:14 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_write_number(int i)
{
	char c;
	
	c = i % 10 + 48;
	i = i / 10;
	if (i > 0)
		ft_write_number(i);
	write(1, &c, 1);
}

int main(void)
{
	int	i;
	
	i = 1;
	while (i <= 100)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_write_number(i);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}


