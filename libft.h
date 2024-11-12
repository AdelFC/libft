/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afodil-c <afodil-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:30:25 by afodil-c          #+#    #+#             */
/*   Updated: 2024/11/12 11:42:30 by afodil-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef
#define LIBFT_H

/*PART 1*/
int ft_isalnum(int c);
int ft_isalpha(int c);
echo 'int ft_isdigit(int c);' >> 
echo 'int ft_isascii(int c);' >> ft_isascii.c
echo 'int ft_isprint(int c);' >> ft_isprint.c
echo 'int ft_toupper(int c);' >> ft_toupper.c
echo 'int ft_tolower(int c);' >> ft_tolower.c
echo 'size_t  ft_strlen(const char *s);' >> ft_strlen.c
echo 'size_t  ft_strlcpy (char *, const char *, size_t);' >> ft_strlcpy.c
echo 'size_t  ft_strlcat (char *, const char *, size_t);' >> ft_strlcat.c
echo 'int ft_strncmp (const char *, const char *, size_t);' >> ft_strncmp.c
echo 'int ft_atoi(const char *nptr);' >> ft_atoi.c
echo 'void    *ft_memset(void *s, int c, size_t n);' >> ft_memset.c
echo 'void    ft_bzero(void *s, size_t n);' >> ft_bzero.c
echo 'void    *ft_memcpy(void *dest, const void *src, size_t n);' >> ft_memcpy.c
echo 'void    *ft_memmove(void *dest, const void *src, size_t n);' >> ft_memmove.c
echo 'char    *ft_strnstr(const char *big, const char *little, size_t len);' >> ft_strnstr .c
echo 'char    *ft_strchr(const char *s, int c);' >> ft_strchr.c
echo 'char    *ft_strrchr(const char *s, int c);' >> ft_strrchr.c
echo 'void    *ft_memchr(const void *s, int c, size_t n);' >> ft_memchr.c
echo 'int ft_memcmp(const void *s1, const void *s2, size_t n);' >> ft_memcmp.c
echo 'void    *ft_calloc(size_t nmemb, size_t size);' >> ft_calloc.c
echo 'char    *ft_strdup(const char *s);' >> ft_strdup.c

/*PART 2*/
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);

/*BONUS*/
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;
t_list  *ft_lstnew(void *content);
void    ft_lstadd_front(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
t_list  *ft_lstlast(t_list *lst);
void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstdelone(t_list *lst, void (*del)(void*));
void    ft_lstclear(t_list **lst, void (*del)(void*));
void    ft_lstiter(t_list *lst, void (*f)(void *));
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif