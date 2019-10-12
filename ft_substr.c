/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alidy <alidy@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 10:15:14 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 11:02:55 by alidy       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*s1;

	size = 0;
	while (s[start + size] || size < len)
		size++;
	if ((s1 = malloc((size + 1) * sizeof(char))) == NULL)
		return (0);
	size = 0;
	while (s1[size])
	{
		s1[size] = s[start + size];
		size++;
	}
	s1[size] = 0;
	return (s1);
}
