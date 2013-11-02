/*
** fire.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Fri Nov  1 23:28:31 2013 BULOT Julien
** Last update Sat Nov  2 18:26:38 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

void	fire(t_hero *hero, t_monster *monster, int critik)
{
  hero->pm -= 3;
  if (critik)
    monster->pv -= (10 * 1.2);
  else
    monster->pv -= 10;
  my_putstr("Hero ");
  my_putstr(hero->name);
  if (critik)
    {
      my_putstr(" use fire\nCritical hit!\n");
      my_putstr(monster->name);
      my_putstr(" lose ");
      my_put_nbr(10 * 1.2);
      my_putstr(" PV\nHero lose 2 PM\n\n");
    }
  else
    {
      my_putstr(" use fire\n");
      my_putstr(monster->name);
      my_putstr(" lose 10 PV\nHero lose 3 PM\n\n");
    }
}
