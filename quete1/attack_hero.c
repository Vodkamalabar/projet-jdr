/*
** attack_hero.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Sat Nov  2 10:42:51 2013 BULOT Julien
** Last update Sat Nov  2 16:18:33 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

int	attack_hero(t_hero *hero, t_monster *monster, char *action)
{
  if (!my_strcmp(action, "attack"))
    attack(hero, monster);
  else if (!my_strcmp(action, "slash"))
    slash(hero, monster);
  else if(!my_strcmp(action, "fire") && hero->pm >= 3)
    fire(hero, monster);
  else if(!my_strcmp(action, "thunder") && hero->pm >= 5)
    thunder(hero, monster);
  else if(!my_strcmp(action, "stat"))
    {
    stat(hero);
    return (1);
    }
  else if (!my_strcmp(action, "libra") && hero->pm)
    libra(hero, monster);
  if (cant_attack(hero, action))
    return (1);
  if (win(hero, monster))
    return (1);
  return (0);
}
