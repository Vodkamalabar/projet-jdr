/*
** process_action.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Sat Nov  2 09:13:07 2013 BULOT Julien
** Last update Sat Nov  2 09:29:32 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

void process_action(char *action, t_hero *hero, t_monster *monster)
{
  if (!my_strcmp(action, "attack"))
    attack(hero, monster);
  else if (!my_strcmp(action, "slash"))
    slash(hero, monster);
  else if(!my_strcmp(action, "fire"))
    fire(hero, monster);
    else if(!my_strcmp(action, "thunder"))
      thunder(hero, monster);
    else if(!my_strcmp(action, "stat"))
      stat(hero);
    else if(!my_strcmp(action, "libra"))
      libra(monster);
    else if(!my_strcmp(action, "quit"))
      quit();
    else
      my_putstr("\n\n");
}
