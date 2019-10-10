/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alidy <alidy@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 10:44:31 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 15:53:51 by alidy       ###    #+. /#+    ###.fr     */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size_s1;
	int 	size_s2;
	char	*str;

	size_s1 = ft_strlen(size_s1);
	size_s2 = ft_strlen(size_s2);
	str = malloc((size_s1 + size_s2 + 1) * sizeof(char));
	size_s1 = 0;
	size_s2 = 0;
	while(s1[size_s1])
	{
		str[size_s1] = s1[size_s1];
		size_s1++;
	}
	while(s2[size_s2])
	{
		str[size_s1 + size_s2] = s2[size_s2];
		size_s2++;
	}
	str[size_s1 + size_s2] = 0;
	return(str);
}
