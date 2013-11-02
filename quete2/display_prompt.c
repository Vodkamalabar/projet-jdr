/*
** display_prompt.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Fri Nov  1 22:40:03 2013 BULOT Julien
** Last update Sat Nov  2 12:37:36 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

int	display_prompt(t_hero *hero, t_monster *monster)
{
  while (hero->pv > 0 && monster->pv > 0)
    {
      my_putstr("Your turn> ");
      if (process_action(readLine(), hero, monster))
	break;
    }
  return (0);
}
