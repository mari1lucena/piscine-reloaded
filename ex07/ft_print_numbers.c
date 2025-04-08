/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:40:44 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/07 12:40:45 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
// {
// 	write(1, &c, 1);
// }

void	ft_print_numbers(void)
{
	int	x;

	x = '0';
	while (x <= '9')
	{
		ft_putchar(x);
		x++;
	}
}

/*int main(void)
{
	ft_print_numbers();
	return(0);
}*/