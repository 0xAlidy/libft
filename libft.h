/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alidy <alidy@student.le-101.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 09:54:32 by alidy        #+#   ##    ##    #+#       */
/*   Updated: 2019/10/12 11:56:04 by alidy       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef	struct	s_list
{
	void			*content;
	struct	s_list	*next;
}				t_list;
size_t	ft_strlen(const char *s);
int		ft_atoi(const char *str);
void	ft_putchar_fd(char c, int fd);
t_list	*ft_lstlast(t_list *lst);


#endif
