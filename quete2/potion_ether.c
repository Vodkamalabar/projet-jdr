/*
** potion_ether.c for quete2 in /Users/julienbulot/Documents/projet-jdr/quete2
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Sat Nov  2 16:21:26 2013 BULOT Julien
** Last update Sat Nov  2 17:07:46 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

int	potion_ether(t_hero *hero, char *action)
{
  if (!my_strcmp(action, "potion"))
    {
      if (!hero->potion)
	{
	  my_putstr("Hero ");
	  my_putstr(hero->name);
	  my_putstr(" doesn't have any potion\n\n");
	  return(1);
	}
      else
	potion(hero);
    }
  if (!my_strcmp(action, "ether"))
    {
      if (!hero->ether)
	{
	  my_putstr("Hero ");
	  my_putstr(hero->name);
	  my_putstr(" doesn't have any ether\n\n");
	  return(1);
	}
      else
	ether(hero);
    }
  return (0);
}
