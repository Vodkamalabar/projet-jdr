/*
** attack.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Fri Nov  1 23:22:12 2013 BULOT Julien
** Last update Fri Nov  1 23:28:18 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

void	attack(t_hero *hero, t_monster *monster)
{
  monster->pv -= 7;
  my_putstr("Hero ");
  my_putstr(hero->name);
  my_putstr(" use attack\n");
  my_putstr(monster->name);
  my_putstr(" lose 7 PV\n\n");
}
