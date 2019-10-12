/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alidy <alidy@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/12 12:32:48 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/10/12 12:48:24 by alidy       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_liste		*liste;
	t_liste		*maillon;

	liste = lstnew((*f)(lst -> content));
	maillon = NULL;
	while (lst != 0)
	{
		maillon = lstnew((*f)(lst -> content));
		ft_lstadd_back(&liste, maillon);
		lst = lst -> next;
	}
}