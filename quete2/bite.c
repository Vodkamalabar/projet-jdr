/*
** bite.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Sat Nov  2 10:03:20 2013 BULOT Julien
** Last update Sat Nov  2 18:31:18 2013 CHEVALLIER Alain
*/

#include "my.h"
#include "quete1.h"

void	bite(t_hero *hero, t_monster *monster)
{
  hero->pv -= 6;
  if (critik)
      hero->pv -= 6 * 1.2;
  my_putstr(monster->name);
  if (critik)
    my_putstr(" use bite\nCritical Hit!\nHero ");
  else
    my_putstr(" use bite\nHero ")
  my_putstr(hero->name);
  my_putstr(" lose 6 PV\n\n");
    }
}
