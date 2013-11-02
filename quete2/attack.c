/*
** attack.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Fri Nov  1 23:22:12 2013 BULOT Julien
** Last update Sat Nov  2 18:20:27 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

void	attack(t_hero *hero, t_monster *monster, int critik)
{
  if (critik)
    monster->pv -= (7 * 1.2);
  else
    monster->pv -= 7;
  my_putstr("Hero ");
  my_putstr(hero->name);
  if (critik)
    {
      my_putstr(" use attack\nCritical hit!\n");
      my_putste(hero->name);
      my_putstr(" lose ");
      my_put_nbr(7 * 1.2);
      my_putstr(" PV\n\n");
    }
  else
    {
      my_putstr(" use attack\n");
      my_putstr(monster->name);
      my_putstr(" lose 7 PV\n\n");
    }
}
