/*
** slash.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Fri Nov  1 23:36:09 2013 BULOT Julien
** Last update Sat Nov  2 18:24:10 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

void	slash(t_hero *hero, t_monster *monster, int critik)
{
  if (critik)
    {
      monster->pv -= (10 * 1.2);
      hero->pv -= (2 * 1.2);
    }
  else
    {
      monster->pv -= 10;
      hero->pv -= 2;
    }
  my_putstr("Hero ");
  my_putstr(hero->name);
  if (critik)
    {
      my_putstr(" use slash\nCritical hit!\n");
      my_putstr(monster->name);
      my_putstr(" lose ");
      my_put_nbr(10 * 1.2);
      my_putstr(" PV\nHero lose ");
      my_put_nbr(2 * 1.2);
      my_putstr(" PV\n\n");
    }
  else
    {
      my_putstr(" use slash\n");
      my_putstr(monster->name);
      my_putstr(" lose 10 PV\nHero lose 2 PV\n\n");
    }
}
