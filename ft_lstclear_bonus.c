/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstclear_bonus.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alidy <alidy@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/12 12:21:56 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/10/13 15:44:41 by alidy       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*maillon;
	t_list	*temp;

	maillon = *lst;
	temp = NULL;
	while (maillon != 0)
	{
		temp = maillon->next;
		(*del)(maillon);
		free(maillon);
		maillon = temp;
	}
	lst = 0;
}
