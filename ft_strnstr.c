/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igearhea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:55:05 by igearhea          #+#    #+#             */
/*   Updated: 2020/11/03 21:42:32 by igearhea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*oneedle;
	const char	*save_haystack;
	size_t		save_len;

	oneedle = needle;
	if (*needle == '\0')
		return ((char *)haystack);
	while (len && *haystack)
	{
		if (*haystack == *needle)
		{
			save_haystack = haystack;
			save_len = len;
			while ((*haystack++ == *needle++) && (len-- != 0))
				if (*needle == 0)
					return ((char *)save_haystack);
			haystack = save_haystack;
			len = save_len;
			needle = oneedle;
		}
		len--;
		haystack++;
	}
	return (0);
}
