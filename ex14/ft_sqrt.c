/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:34:28 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/07 15:36:26 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (nb > (i * i))
		i++;
	while (nb == (i * i))
		return (i);
	return (0);
}
// #include <stdio.h>

// int        main(void)
// {
//     printf ("%i\n", ft_sqrt(1));
//     return (0);
// }