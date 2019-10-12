/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alidy <alidy@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 13:21:43 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/10/12 10:11:10 by alidy       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		nb_words(char const *s, char c)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1])
			res++;
		i++;
	}
	return (res + 1);
}

void	complete_tab(char **tab, char const *s, int nb_w, char c)
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
		if (s[j])
			j++;
		y = 0;
	}
}

char	**ft_split(char const *s, char c)
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
