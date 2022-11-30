#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*new;
	size_t	i;

	i = 0;
	size = ft_strlen(s);
	new = malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
