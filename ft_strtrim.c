/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alidy <alidy@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 11:03:38 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/10/18 14:46:29 by alidy       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	nb_start(char const *s, char const *set)
{
	int i;
	int j;
	int save;

	i = 0;
	j = 0;
	save = 0;
	while (s[i])
	{
		save = i;
		while (set[j])
		{
			if (s[i] == set[j])
				i++;
			else
				j++;
		}
		if (i == save)
			return (i);
		j = 0;
	}
	return (i);
}

static int	nb_end(char const *s, char const *set, int size)
{
	int j;
	int i;
	int save;

	j = 0;
	i = size - 1;
	save = 0;
	while (i >= 0)
	{
		save = i;
		while (set[j] && i > 0)
		{
			if (s[i] == set[j])
				i--;
			else
				j++;
		}
		if (i == save)
			return (size - i - 1);
		j = 0;
	}
	return (size - i - 1);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		s_total;
	int		start;
	int		end;
	char	*str;
	int		i;

	if (s1)
	{
		s_total = ft_strlen(s1);
		start = nb_start(s1, set);
		end = nb_end(s1, set, s_total);
		i = -1;
		if (s_total - start - end <= 0)
			return (str = "");
		if ((str = malloc((s_total - start - end + 1) * sizeof(char))) == NULL)
			return (0);
		while (start + ++i < s_total - end)
			str[i] = s1[start + i];
		str[i] = 0;
	}
	else
		str = 0;
	return (str);
}
