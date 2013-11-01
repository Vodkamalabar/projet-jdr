/*
** process_action.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Fri Nov  1 22:49:47 2013 BULOT Julien
** Last update Fri Nov  1 23:03:32 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

void	process_action(char *action, t_hero *hero)
{
  if (!my_strcmp(action, "attack"))
    {
      my_putstr(hero->name);
      my_putchar('\n');
      my_put_nbr(hero->pv);
      my_putchar('\n');
      my_put_nbr(hero->pm);
      my_putchar('\n');
    }
  /*  elseif (!my_strcmp(action, "slash"))
    {
    }
  elseif(!my_strcmp(action, "fire"))
    {
    }
  elseif(!my_strcmp(action, "thunder"))
    {
    }
  elseif(!my_strcmp(action, "stat"))
    {
    }
  elseif(!my_strcmp(action, "libra"))
    {
    }
  */
}
