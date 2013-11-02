/*
** monster_appear.c for quete2 in /Users/julienbulot/Documents/projet-jdr/quete2
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Sat Nov  2 16:47:28 2013 BULOT Julien
** Last update Sat Nov  2 16:50:51 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

int	monster_appear(t_monster *monster)
{
  if (monster->number)
    {
      monster->pv = 75;
      monster->pm = 20;
      my_putstr("A new monster appear\n");
      return (1);
    }
  return (0);
}
