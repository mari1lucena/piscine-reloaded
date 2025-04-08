/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:43:15 by mlucena-          #+#    #+#             */
/*   Updated: 2025/04/07 12:51:19 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dupli;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dupli = (char *)malloc((i + 1) * sizeof(char));
	if (!dupli)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dupli[i] = src[i];
		i++;
	}
	dupli[i] = '\0';
	return (dupli);
}
