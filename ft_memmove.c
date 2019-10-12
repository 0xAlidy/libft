/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alidy <alidy@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 16:49:28 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 12:55:00 by alidy       ###    #+. /#+    ###.fr     */
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
	temp[i] = 0;
	while (temp[i])
	{
		dest[i] = temp[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
