#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = (void *)malloc(nmemb * size);
	ft_bzero(ptr, nmemb);
	return (ptr);
}
