/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap_bonus.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alidy <alidy@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/12 12:32:48 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 18:02:36 by alidy       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list		*liste;
	t_list		*maillon;

	liste = NULL;
	maillon = NULL;
	while (lst != 0)
	{
		maillon = ft_lstnew((*f)(lst->content));
		ft_lstadd_back(&liste, maillon);
		lst = lst->next;
	}
	return (liste);
}
