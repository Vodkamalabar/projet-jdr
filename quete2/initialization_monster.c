/*
** initialization_monster.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Fri Nov  1 21:21:37 2013 BULOT Julien
** Last update Sat Nov  2 16:16:36 2013 BULOT Julien
*/

#include <stdlib.h>
#include <time.h>
#include "my.h"
#include "quete1.h"

t_monster	*initialization_monster(t_monster *monster)
{
  monster = xmalloc(sizeof(*monster));
  monster->name = xmalloc(8 * sizeof(monster->name));
  my_strcpy(monster->name, "Monster");
  monster->pv = 75;
  monster->pm = 20;
  srand(time(NULL));
  monster->number = rand() % 3 + 1;
  return (monster);
}
