/*
** thunder.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Fri Nov  1 23:43:11 2013 BULOT Julien
** Last update Sat Nov  2 18:28:08 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

void	thunder(t_hero *hero, t_monster *monster, int critik)
{
  hero->pm -= 5;
  if (critik)
    monster->pv -= (15 * 1.2);
  else
    monster->pv -= 15;
  my_putstr("Hero ");
  my_putstr(hero->name);
  if (critik)
    {
      my_putstr(" use thunder\nCritical hit!\n");
      my_putstr(monster->name);
      my_putstr(" lose ");
      my_put_nbr(15 * 1.2);
      my_putstr(" PV\nHero lose 5 PN\n\n");
    }
  else
    {
      my_putstr(" use thunder\n");
      my_putstr(monster->name);
      my_putstr(" lose 15 PV\nHero lose 5 PM\n\n");
    }
}
