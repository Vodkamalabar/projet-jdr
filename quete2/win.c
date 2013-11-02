/*
** win.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Sat Nov  2 10:54:30 2013 BULOT Julien
** Last update Sat Nov  2 16:50:26 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

int	win(t_hero *hero, t_monster *monster)
{
  if (hero->pv <= 0)
    {
      my_putstr("Hero ");
      my_putstr(hero->name);
      my_putstr(" is dead\nYou lose\n");
      return (1);
    }
  else if (monster->pv <= 0)
    {
      my_putstr("Hero ");
      my_putstr(hero->name);
      my_putstr(" killed a monster\n");
      monster->number--;
      if (!monster_appear(monster))
	{
	  my_putstr("Hero ");
	  my_putstr(hero->name);
	  my_putstr(" has defeated the monsters\nCongratulation, you won !!\n");
	  return (1);
	}
    }
  return (0);
}
