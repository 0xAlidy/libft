/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alidy <alidy@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 09:52:35 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 15:18:06 by alidy       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

char		*ft_strnstr(const char *dest, const char *src, size_t len)
{
	int i;
	int y;

	i = 0;
	y = 0;
	if (*src == 0)
		return (dest);
	while (dest[i] && len > i)
	{
		if (dest[i] == src[y])
		{
			while (dest[i + y] == src[y] && len > i + y)
				y++;
			if (src[y] == 0)
				return (&dest[i]);
		}
		i++;
		y = 0;
	}
	return (0);
}
