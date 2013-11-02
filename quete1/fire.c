/*
** fire.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Fri Nov  1 23:28:31 2013 BULOT Julien
** Last update Sat Nov  2 10:12:35 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

void	fire(t_hero *hero, t_monster *monster)
{
  hero->pm -= 3;
  monster->pv -= 10;
  my_putstr("Hero ");
  my_putstr(hero->name);
  my_putstr(" use fire\n");
  my_putstr(monster->name);
  my_putstr(" lose 10 PV\nHero lose 3 PM\n\n");
}
