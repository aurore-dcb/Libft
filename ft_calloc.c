#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if (size > sizeof(char) * 2147483424 || count > sizeof(char) * 2147483424)
		return (NULL);
	str = malloc(count * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, (count * size));
	return (str);
}