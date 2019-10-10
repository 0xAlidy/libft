/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alidy <alidy@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 15:29:09 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 18:22:04 by alidy       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int		i;
	char	*dest;
	const char	*source;

	dest = dst;
	source = src;
	i = 0;
	while (src[i] && i < n && source[i] != c)
	{
		dest[i] = source[i];
		i++;
	}
	if (source[i] == c)
	{
		dest[i] = source[i];
		return (&dest[i + 1]);
	}
	return (0);
}
