/*
** earthquake.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Sat Nov  2 10:06:23 2013 BULOT Julien
<<<<<<< HEAD
** Last update Sat Nov  2 18:40:45 2013 BULOT Julien
=======
** Last update Sat Nov  2 18:31:42 2013 CHEVALLIER Alain
>>>>>>> 09cefeeaacafe97d70f24b59f3be7e3b8e63c095
*/

#include "my.h"
#include "quete1.h"

void	earthquake(t_hero *hero, t_monster *monster, int critik)
{
  hero->pv -= 15;
  if (critik)
    hero->pv -= 15 * 1.2;
  monster->pv -= 3;
  if (critik)
    {
      hero->pv -= (15 * 1.2);
      monster->pv -= (3 * 1.2);
    }
  my_putstr(monster->name);
  if (critik)
<<<<<<< HEAD
    {
      my_putstr(" use earthquake\nCritical hit!\nHero ");
      my_putstr(hero->name);
      my_putstr(" lose 15 PV\n");
      my_put_nbr(15 * 1.2);
      my_putstr(" PV\n");
      my_putstr(monster->name);
      my_putstr(" lose ");
      my_put_nbr(3 * 1.2);
      my_putstr(" PV\n\n");
    }
  else
    {
      my_putstr(" use earthquake\nHero ");
      my_putstr(hero->name);
      my_putstr(" lose 15 PV\n");
      my_putstr(monster->name);
      my_putstr(" lose 3 PV\n\n");
    }
=======
    my_putstr(" use earthquake\nCritical Hit!\nHero ");
  else
    my_putstr(" use earthquake\nHero ");
  my_putstr(hero->name);
  my_putstr(" lose 15 PV\n");
  my_putstr(monster->name);
  my_putstr(" lose 3 PV\n\n");
>>>>>>> 09cefeeaacafe97d70f24b59f3be7e3b8e63c095
}
