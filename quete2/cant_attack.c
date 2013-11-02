/*
** cant_attack.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Sat Nov  2 13:21:05 2013 BULOT Julien
** Last update Sat Nov  2 13:21:25 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

int	cant_attack(t_hero *hero, char *action)
{
  if ((!my_strcmp(action, "fire") && hero->pm < 3) || 
      (!my_strcmp(action, "thunder") && hero->pm < 5) || 
      (!my_strcmp(action, "libra") && !hero->pm))
    {
      my_putstr("Hero ");
      my_putstr(hero->name);
      my_putstr(" can't use ");
      my_putstr(action);
      my_putstr(", PM too low\n\n");
      return (1);
    }
  return (0);
}
