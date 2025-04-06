#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dupli;
	int	i;

	i = 0;
	
	while(src[i])
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