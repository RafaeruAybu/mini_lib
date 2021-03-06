#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			temp;
	size_t			count;
	const char		*dst_ptr;
	const char		*src_ptr;

	count = dstsize;
	dst_ptr = dst;
	src_ptr = src;
	while (count-- && *dst)
		dst++;
	temp = dst - dst_ptr;
	count = dstsize - temp;
	if (count-- == 0)
		return (temp + ft_strlen(src));
	while (*src)
	{
		if (count)
		{
			*dst++ = *src;
			count--;
		}
		src++;
	}
	*dst = '\0';
	return (temp + (src - src_ptr));
}
