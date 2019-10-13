/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alidy <alidy@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 16:49:28 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/10/13 18:41:02 by alidy       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		temp[len];
	char		*dest;
	const char	*source;

	i = 0;
	dest = dst;
	source = src;
	while (i < len)
	{
		temp[i] = source[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dest[i] = temp[i];
		i++;
	}
	return (dest);
}
