/*
** bite.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Sat Nov  2 10:03:20 2013 BULOT Julien
<<<<<<< HEAD
** Last update Sat Nov  2 18:34:02 2013 BULOT Julien
=======
** Last update Sat Nov  2 18:31:18 2013 CHEVALLIER Alain
>>>>>>> 09cefeeaacafe97d70f24b59f3be7e3b8e63c095
*/

#include "my.h"
#include "quete1.h"

void	bite(t_hero *hero, t_monster *monster, int critik)
{
  hero->pv -= 6;
  if (critik)
<<<<<<< HEAD
    hero->pv -= (6 * 1.2);
  my_putstr(monster->name);
  if (critik)
    {
      my_putstr(" use bite\nCriticalhit!\nHero ");
      my_putstr(hero->name);
      my_putstr(" lose 6 PV\n\n");
    }
  else
    {
      my_putstr(" use bite\nCriticalhit!\nHero ");
      my_putstr(hero->name);
      my_putstr(" lose ");
      my_put_nbr(6 * 1.2);
      my_put_str(" PV\n\n");
=======
      hero->pv -= 6 * 1.2;
  my_putstr(monster->name);
  if (critik)
    my_putstr(" use bite\nCritical Hit!\nHero ");
  else
    my_putstr(" use bite\nHero ")
  my_putstr(hero->name);
  my_putstr(" lose 6 PV\n\n");
>>>>>>> 09cefeeaacafe97d70f24b59f3be7e3b8e63c095
    }
}
