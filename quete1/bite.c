/*
** bite.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Sat Nov  2 10:03:20 2013 BULOT Julien
** Last update Sat Nov  2 10:14:34 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

void	bite(t_hero *hero, t_monster *monster)
{
  hero->pv -= 6;
  my_putstr(monster->name);
  my_putstr(" use bite\nHero ");
  my_putstr(hero->name);
  my_putstr(" lose 6 PV\n\n");
}
