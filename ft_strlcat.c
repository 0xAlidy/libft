/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alidy <alidy@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 10:15:51 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 11:02:29 by alidy       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	y;
	size_t	size_src;

	i = 0;
	y = 0;
	size_src = ft_strlen(src);
	while (dest[i])
		i++;
	while (i + y < size - 1)
	{
		dest[i + y] = src[y];
		y++;
	}
	dest[i + y] = 0;
	return (i + size_src);
}
