/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alidy <alidy@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 10:44:31 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 11:21:28 by alidy       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size_s1;
	int		size_s2;
	char	*str;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	size_s1 = 0;
	size_s2 = 0;
	if ((str = malloc((size_s1 + size_s2 + 1) * sizeof(char))) == NULL)
		return (0);
	while (s1[size_s1])
	{
		str[size_s1] = s1[size_s1];
		size_s1++;
	}
	while (s2[size_s2])
	{
		str[size_s1 + size_s2] = s2[size_s2];
		size_s2++;
	}
	str[size_s1 + size_s2] = 0;
	return (str);
}
