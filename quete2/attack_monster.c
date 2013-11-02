/*
** attack_monster.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Sat Nov  2 09:45:49 2013 BULOT Julien
** Last update Sat Nov  2 18:31:59 2013 BULOT Julien
*/

#include <stdlib.h>
#include <time.h>
#include "quete1.h"

void	attack_monster(t_hero *hero, t_monster *monster, int critik)
{
  int	attack;

  srand(time(NULL));
  if (monster->pm >= 5)
    attack = rand() % 3;
  else
    attack = rand() % 2;
  if (attack == 0)
    bite(hero, monster, critik);
  else if (attack == 1)
    earthquake(hero, monster, critik);
  else if (attack == 2 && monster->pm >= 5)
    doom(hero, monster,critik);
}
