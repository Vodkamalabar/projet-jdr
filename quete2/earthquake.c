/*
** earthquake.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Sat Nov  2 10:06:23 2013 BULOT Julien
** Last update Sat Nov  2 18:31:42 2013 CHEVALLIER Alain
*/

#include "my.h"
#include "quete1.h"

void	earthquake(t_hero *hero, t_monster *monster)
{
  hero->pv -= 15;
  if (critik)
    hero->pv -= 15 * 1.2;
  monster->pv -= 3;
  my_putstr(monster->name);
  if (critik)
    my_putstr(" use earthquake\nCritical Hit!\nHero ");
  else
    my_putstr(" use earthquake\nHero ");
  my_putstr(hero->name);
  my_putstr(" lose 15 PV\n");
  my_putstr(monster->name);
  my_putstr(" lose 3 PV\n\n");
}
