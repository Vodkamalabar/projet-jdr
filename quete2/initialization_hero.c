/*
** initialization.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Fri Nov  1 20:49:26 2013 BULOT Julien
** Last update Sat Nov  2 15:57:38 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

t_hero	*initialization_hero(t_hero *hero, char **argv)
{
  hero = xmalloc(sizeof(*hero));
  if (!my_strcmp(argv[1], "-n"))
    if (argv[2])
      {
	hero->name = xmalloc((my_strlen(argv[2]) + 1) * sizeof(hero->name));
	my_strcpy(hero->name, argv[2]);
      }
  if (my_strcmp(argv[1], "-n") || (!my_strcmp(argv[1], "-n") && !argv[2]))
    {
      hero->name = xmalloc(7 * sizeof(hero->name));
      my_strcpy(hero->name, "Fenrir");
    }
  hero->pv = 100;
  hero->pv_max = 100;
  hero->pm = 30;
  hero->pm_max = 30;
  hero->potion = 5;
  hero->ether = 5;
  return (hero);
}
