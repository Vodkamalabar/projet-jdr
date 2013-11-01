/*
** initialization.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Fri Nov  1 20:49:26 2013 BULOT Julien
** Last update Fri Nov  1 20:53:59 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

void	initialization(t_hero *hero, char **argv)
{
  hero = xmalloc(sizeof(*hero));
  if (!my_strcmp(argv[1], "-n"))
    {
      if (argv[2])
	{
	  hero->name = xmalloc((my_strlen(argv[2]) + 1) * sizeof(hero->name));
	  my_strcpy(hero->name, argv[2]);
	}
      else
	{
	  hero->name = xmalloc(7 * sizeof(hero->name));
	  my_strcpy(hero->name, "(null)");
	}
    }
  else
    {
      hero->name = xmalloc(7 * sizeof(hero->name));
      my_strcpy(hero->name, "(null)");
    }
}
