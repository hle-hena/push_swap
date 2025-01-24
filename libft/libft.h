/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-hena <hle-hena@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 18:53:15 by marvin            #+#    #+#             */
/*   Updated: 2024/11/29 12:48:24 by hle-hena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef long long int	t_lli;
typedef long int		t_li;

/*			freedom				*/
/********************************/
t_lli	ft_tern_int(int cnd, t_lli val1, t_lli val2);
char	*ft_tern_str(int cnd, char *ret1, char *ret2);

/*			is_smth				*/
/********************************/
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

/*			lst_func			*/
/********************************/
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
int		ft_lstcountf(t_list *lst, int (*f)(t_list *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
int		ft_lstsorted(t_list *lst, int (*f)(t_list *));

/*			math_func			*/
/********************************/
int		ft_abs(int nb);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
int		ft_max(int a, int b);
t_li	ft_pow(long int nb, int pow);

/*			mem_func			*/
/********************************/
void	ft_bzero(void *add, size_t n);
void	*ft_calloc(size_t n, size_t size);
void	ft_del(void *add);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *add, int c, size_t n);
int		ft_memcmp(const void *add1, const void *add2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *add, int oct, size_t n);
void	*ft_realloc(void *ptr, size_t size);

/*			print&co			*/
/********************************/
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *str, int fd);

/*			str_func			*/
/********************************/
int		count_words(const char *str, char c);
char	**ft_split(const char *str, char c);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *src);
void	ft_striteri(char *str, void (*f)(unsigned int, char *));
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(const char *str, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_strrchr(const char *str, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif