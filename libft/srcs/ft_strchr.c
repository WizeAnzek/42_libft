#include "libft.h"

char	*ft_strchr(const char *src, int a)
{
	int i;
	
	i = 0;
	while (src[i])
	{
		if (src[i] == a)
			return ((char *)&src[i]);
		i++;
	}
	if (a == '\0')
		return ((char *)&src[i]);
	return (NULL);
}
