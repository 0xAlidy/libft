/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alidy <alidy@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 13:21:43 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/10/13 21:53:30 by alidy       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	nb_words(char const *s, char c)
{
	int i;
	int res;
	int ok;

	i = 0;
	res = 0;
	ok = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
			ok = 1;
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			if (s[i])
				res++;
		}
		else
			i++;
	}
	return (res + ok);
}

static int	complete_tab(char **tab, char const *s, int nb_w, char c)
{
	int i;
	int j;
	int y;

	i = -1;
	j = 0;
	y = 0;
	while (s[j] == c)
		j++;
	while (++i < nb_w)
	{
		while (s[j + y] != c && s[j + y])
			y++;
		if ((tab[i] = malloc(sizeof(char) * y + 1)) == NULL)
			return (0);
		y = 0;
		while (s[j] != c && s[j])
			tab[i][y++] = s[j++];
		tab[i][y] = 0;
		while (s[j] == c)
			j++;
		y = 0;
	}
	return (1);
}

char		**ft_split(char const *s, char c)
{
	char	**tab;
	int		nb_w;

	nb_w = nb_words(s, c);
	if ((tab = malloc(sizeof(char *) * (nb_w + 1))) == NULL)
		return (0);
	tab[nb_w] = 0;
	complete_tab(tab, s, nb_w, c);
	return (tab);
}
