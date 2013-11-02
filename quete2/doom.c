/*
** doom.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Sat Nov  2 10:09:00 2013 BULOT Julien
** Last update Sat Nov  2 10:14:59 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

void	doom(t_hero *hero, t_monster *monster)
{
  hero->pv -= 11;
  monster->pm -= 5;
  my_putstr(monster->name);
  my_putstr(" use doom\nHero ");
  my_putstr(hero->name);
  my_putstr(" lose 11 PV\n");
  my_putstr(monster->name);
  my_putstr(" lose 5 PM\n\n");
}
