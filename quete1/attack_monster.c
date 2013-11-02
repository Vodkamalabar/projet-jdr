/*
** attack_monster.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Sat Nov  2 09:45:49 2013 BULOT Julien
** Last update Sat Nov  2 09:58:28 2013 BULOT Julien
*/

#include <stdlib.h>
#include <stime.h>
#include "quete1.h"

void	attack_monster(t_hero *hero, t_monster *monster)
{
  int	attack;

  srand(time(NULL));
  attack = rand() % 3;
  if (attack == 0)
    bite(hero, monster);
  else if (attack == 1)
    earthquake(hero, monster);
  else
    doom(hero, monster);
  display_prompt(hero, monster);
}
