#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (c != s[i] && i > 0)
		i--;
	if (s[i] == c)
		return ((char *)s + i);
	return (NULL);
}
