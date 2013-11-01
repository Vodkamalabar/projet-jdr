/*
** main.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Fri Nov  1 19:43:44 2013 BULOT Julien
** Last update Fri Nov  1 21:09:46 2013 BULOT Julien
*/

#include <stdlib.h>
#include "my.h"
#include "quete1.h"

int		main(int argc, char **argv)
{
  t_hero	*hero;

  if (argc == 1)
    {
      my_putstr("USAGE: <-n> <Player name>\n");
      return (EXIT_FAILURE);
    }
  hero = NULL;
  initialization_hero(hero, argv);
  return (EXIT_SUCCESS);
}
