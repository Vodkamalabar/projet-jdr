/*
** my.h for quete1 in /Users/julienbulot/Documents/functions_libmy
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Fri Nov  1 20:21:53 2013 BULOT Julien
** Last update Fri Nov  1 20:30:08 2013 BULOT Julien
*/

#ifndef __MY_H__
# define __MY_H__

char		*my_revstr(char *str);
char		*my_strcpy(char *s1, const char *s2);
char		*my_strncpy(char *s1, const char *s2, unsigned int n);
char		my_is_prime(unsigned int nombre);
int		my_getnbr(const char *str);
int		my_putchar(int c);
int		my_strcmp(const char *s1, const char *s2);
int		xwrite(int fildes, const void *buf, unsigned int nbyte);
unsigned int	my_find_prime_sup(unsigned int nb);
unsigned int	my_power_rec(int nb, int power);
unsigned int	my_strlen(const char *s);
unsigned short	my_square_root(unsigned int nb);
void		*xmalloc(unsigned int size);
void		my_isneg(int n);
void		my_put_nbr(int nb);
void		my_putstr(const char *str);
void		my_sort_int_tab(int *tab, unsigned int size);
void		my_swap(int *a, int *b);

#endif
