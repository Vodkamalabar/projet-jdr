/*
** process_action.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Sat Nov  2 09:13:07 2013 BULOT Julien
** Last update Sat Nov  2 17:54:34 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

int	process_action(char *action, t_hero *hero, t_monster *monster)
{
  if (!my_strcmp(action, "quit"))
    {
      my_putstr("Vous quittez le jeu\n\n");
      return (1);
    }
  else if (!my_strcmp(action, ""))
    {
      my_putchar('\n');
      return (0);
    }
  else if (my_strcmp(action, "attack") && my_strcmp(action, "slash") && 
	   my_strcmp(action, "fire") && my_strcmp(action, "thunder") && 
	   my_strcmp(action, "stat") && my_strcmp(action, "libra") && 
	   my_strcmp(action, "heal") && my_strcmp(action, "potion") &&
	   my_strcmp(action, "ether"))
    {
      my_putchar('\n');
      return (0);
    }
  if (!attack_hero(hero, monster, action, critic()))
    attack_monster(hero, monster, critic());
  if (win(hero, monster))
    return (1);
  return (0);
}
