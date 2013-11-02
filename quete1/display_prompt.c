/*
** display_prompt.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Fri Nov  1 22:40:03 2013 BULOT Julien
** Last update Fri Nov  1 23:12:31 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

void	display_prompt(t_hero *hero, t_monster *monster)
{
  my_putstr("Your turn> ");
  process_action(readLine(), hero, monster);
}
