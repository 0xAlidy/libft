/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alidy <alidy@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 15:10:07 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 17:02:36 by alidy       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static	int		nb_char(int n)
{
	int res;

	if (n == 0)
		return (1);
	if (n < 0)
	{
		res = 1;
		n = n * -1;
	}
	else
		res = 0;
	while (n > 0)
	{
		res++;
		n = n / 10;
	}
	return (res);
}

static	int		ft_neg(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static	char	*ft_int_min(char *s)
{
	int		min;
	int		i;

	min = 147483648;
	i = 10;
	s[0] = '-';
	s[1] = '2';
	while (i > 1)
	{
		s[i] = (min % 10 + 48);
		min = min / 10;
		i--;
	}
	return (s);
}

char			*ft_itoa(int n)
{
	int		nb_c;
	int		i;
	int		neg;
	char	*str;

	nb_c = nb_char(n);
	i = nb_c - 1;
	neg = ft_neg(n);
	if ((str = malloc(sizeof(char) * (nb_c + 1))) == NULL)
		return (0);
	if (n == -2147483648)
		return (ft_int_min(str));
	str[nb_c] = 0;
	if (neg == 1)
		n = n * -1;
	while (i >= 0)
	{
		if (neg == 1 && i == 0)
			str[i] = '-';
		else
			str[i] = (n % 10 + 48);
		n = n / 10;
		i--;
	}
	return (str);
}
