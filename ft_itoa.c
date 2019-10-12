/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alidy <alidy@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 15:10:07 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/10/12 09:26:03 by alidy       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		nb_char(int n)
{
	int res;

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

int		ft_neg(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
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
	str[nb_c] = 0;
	if (n == -2147483648)
		return ("-2147483648");
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
