/*
** my.h for my in /Users/leon/cheval_a
** 
** Made by CHEVALLIER Alain
** Login   <cheval_a@etna-alternance.net>
** 
** Started on  Wed Oct 30 11:26:13 2013 CHEVALLIER Alain
** Last update Thu Oct 31 20:15:05 2013 CHEVALLIER Alain
*/

#ifndef __MY_H__

# define __MY_H__

void    my_putchar(char c);
int     my_isneg(int n);
int     my_put_nbr(int nb);
int     my_swap(int *a, int *b);
int     my_putstr(char *str);
int     my_strlen(char *str);
int     my_getnbr(char *str);
void    my_sort_int_tab(int *tab, int size);
int     my_power_rec(int nb, int power);
int     my_square_root(int nb);
int     my_is_prime(int nombre);
int     my_find_prime_sup(int nb);
char    *my_strcpy(char *dest, char *src);
char    *my_strncpy(char *dest, char *src, int n);
char    *my_revstr(char *str);  
char    *my_strstr(char *str, char *to_find);
int     my_strcmp(char *s1, char *s2);
int     my_strncmp(char *s1, char *s2, int n);
char    *my_strupcase(char *str);
char    *my_strlowcase(char *str);
char    *my_strcapitalize(char *str);
int     my_str_isalpha(char *str);
int     my_str_isnum(char *str);
int     my_str_islower(char *str);
int     my_str_isupper(char *str);
int     my_str_isprintable(char *str);
int     my_showstr(char *str);
char    *my_strcat(char *str1, char *str2);
char    *my_strncat(char *str1, char *str2, int n);
int     my_strlcat(char *str1, char *str2, int n);
#endif
