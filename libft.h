/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: madel-va <madel-va@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/09/23 10:57:34 by madel-va          #+#    #+#             */
/*   Updated: 2024/09/23 10:57:34 by madel-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/*Funciones */
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t nmemb, size_t size);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
char				*ft_strchr(const char *s, int c);
char				*ft_strdup(const char *s);
char				*ft_strnstr(const char *big, const char *little,
						size_t len);
char				*ft_strrchr(const char *s, int c);
char				*ft_itoa(int n);
char				**ft_split(char const *s, char c);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);
int					ft_isalnum(int c);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strlen(const char *str);
int					ft_strncmp(char *s1, char *s2, unsigned int n);
int					ft_tolower(int c);
int					ft_lstsize(t_list *lst);
int					ft_toupper(int c);
unsigned int		ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int		ft_strlcpy(char *dest, const char *src, size_t size);

typedef struct s_list
{
	void				*content;
	struct s_list		*next;
}		t_list;

t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));
/* "*" es el operador de desreferencia,
	que nos permite acceder al valor al que apunta el puntero
 Si tienes un puntero que apunta a una dirección de memoria, el operador
	* te permite acceder al contenido de esa dirección.
  "&" sirve para acceder a la dirección de memoria
  +--------+---------+      +--------+---------+      +--------+---------+
  | content |  next  |----->| content |  next  |----->| content |  next  |
  +--------+---------+      +--------+---------+      +--------+---------+
	(Nodo 1)               (Nodo 2)                (Nodo 3)
*/

#endif