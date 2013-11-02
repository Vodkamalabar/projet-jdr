/*
** thunder.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Fri Nov  1 23:43:11 2013 BULOT Julien
** Last update Sat Nov  2 10:13:11 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

void	thunder(t_hero *hero, t_monster *monster)
{
  hero->pm -= 5;
  monster->pv -= 15;
  my_putstr("Hero ");
  my_putstr(hero->name);
  my_putstr(" use thunder\n");
  my_putstr(monster->name);
  my_putstr(" lose 15 PV\nHero lose 5 PM\n\n");
}
