/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alidy <alidy@student.le-101.fr>            +:+   +:    +:    +:+     *
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 10:09:47 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 10:51:48 by alidy       ###    #+. /#+    ###.fr     */
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

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	int i;
	int y;
	size_t size_src;

	i = 0;
	y = 0;
	size_src = ft_strlen(src);
	while(dest[i])
		i++;
	while(i + y < size - 1)
	{
		dest[i + y] = src[y];
		y++;
	}
	dest[i + y] = 0;
	return (i + size_src);
}
