/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alidy <alidy@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 11:03:38 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 17:49:56 by alidy       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

size_t		ft_strlen(const char *s)
{
	size_t		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int		nb_start(char const *s, char const *set)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i])
	{
		save = i;
		while (set[j])
		{
			if (s[i] == set[j])
				i++;
			j++;
		}
		if (i == save)
			return (i);
	}
}

int		nb_end(char const *s, char const *set, int size)
{
	int j;
	int i;

	j = 0;
	i = size;
	while (i >= 0)
	{
		save = i;
		while (set[j])
		{
			if (s[i] == set[j])
				i--;
			j++;
		}
		if (i == save)
			return (size - i);
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int 	s_total;
	int		start;
	int		end;
	char const	*str;

	s_total = ft_strlen(s1);
	start = nb_start(s1, set);
	end = nb_end(s1, set, size_total);
	if((str = malloc((s_total - start - end + 1) * sizeof(char))) == NULL)
		return (0);
	while(start < s_total - end)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
}