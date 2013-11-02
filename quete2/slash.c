/*
** slash.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Fri Nov  1 23:36:09 2013 BULOT Julien
** Last update Sat Nov  2 10:12:53 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

void	slash(t_hero *hero, t_monster *monster)
{
  monster->pv -= 10;
  hero->pv -= 2;
  my_putstr("Hero ");
  my_putstr(hero->name);
  my_putstr(" use slash\n");
  my_putstr(monster->name);
  my_putstr(" lose 10 PV\nHero lose 2 PV\n\n");
}
