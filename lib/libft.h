/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoares <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:04:32 by msoares           #+#    #+#             */
/*   Updated: 2020/02/13 14:58:48 by msoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

char				*ft_chartostr(char c);

/*
** Bonus
*/

int					ft_lstsize(t_list *lst);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lst(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

/*
** Part 1
*/

void				ft_bzero(void	*str, size_t n);
int					ft_isalpha(int i);
int					ft_isascii(int i);
int					ft_isdigit(int i);
int					ft_isprint(int i);
void				*ft_memcpy(void *str1, const void *str2, size_t size);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *str, int c, size_t n);
int					ft_memcmp(const void *str1, const void *str2, size_t n);
void				*ft_memmove(void *str1, const void *str2, size_t n);
void				*ft_memset(void *str1, int c, size_t size);
char				*ft_strchr(char const *str, int c);
size_t				ft_strlcat(char *dest, char const *src, size_t size);
size_t				ft_strlcpy(char *dest, char const *src, size_t size);
size_t				ft_strlen(char const *str);
int					ft_strncmp(char const *s1, char const *s2, size_t n);
int					ft_tolower(int i);
int					ft_toupper(int i);
int					ft_isalnum(int i);
char				*ft_strrchr(char const *str, int c);
int					ft_atoi(char const *str);
char				*ft_strnstr(char const *big, char const *little,
					size_t len);
void				*ft_calloc(size_t num, size_t size);
char				*ft_strdup(char const *str);

/*
** Part 2 - Adicional Functions
*/

char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				**ft_split(char const *s, char c);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_itoa(int nb);

#endif
