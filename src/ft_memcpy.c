#include "libft.h"

/*
** return string 'dst' which is a copy of 'n' bytes of 'src'
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str_dst;
	char	*str_src;

	i = 0;
	str_dst = (char *)dst;
	str_src = (char *)src;
	while (i < n)
	{
		str_dst[i] = str_src[i];
		i++;
	}
	return (dst);
}
