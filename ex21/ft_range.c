#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	i = max - min;
	if (min >= max)
		return (NULL);
	result = (int *)malloc(i * sizeof(int));
	if (!result)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}

int	main()
{
	printf("%d", ft_range(5, 8));
}
