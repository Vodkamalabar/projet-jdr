/*
** initialization_monster.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Fri Nov  1 21:21:37 2013 BULOT Julien
** Last update Fri Nov  1 21:26:56 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

void	initialization_monster(t_monster *monster)
{
  monster = xmalloc(sizeof(*monster));
  monster->name = xmalloc(8 * sizeof(monster->name));
  my_strcpy(monster->name, "Monster");
  monster->pv = 75;
  monster->pm = 20;
}
