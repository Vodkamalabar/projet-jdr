/*
** stat.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Fri Nov  1 23:40:01 2013 BULOT Julien
** Last update Sat Nov  2 17:00:25 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

void	stat(t_hero *hero)
{
  my_putstr("Hero : ");
  my_putstr(hero->name);
  my_putstr("\n|--PV : ");
  my_put_nbr(hero->pv);
  my_putstr("\n|--PM : ");
  my_put_nbr(hero->pm);
  my_putstr("\n|--Potion : ");
  my_put_nbr(hero->potion);
  my_putstr("\n|--Ether : ");
  my_put_nbr(hero->ether);
  my_putstr("\n\n");
}
