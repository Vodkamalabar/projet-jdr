/*
** potion_ether.c for quete2 in /Users/julienbulot/Documents/projet-jdr/quete2
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Sat Nov  2 14:53:47 2013 BULOT Julien
** Last update Sat Nov  2 16:14:35 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

void	potion(t_hero *hero)
{
  int	health;

  if (!hero->potion)
    {
      my_putstr("Hero ");
      my_putstr(hero->name);
      my_putstr(" doesn't have any potion\n\n");
    }
  else
    {
      health = 30;
      if (hero->pv + health > hero->pv_max)
	{
	  hero->pv = hero->pv_max;
	  health = hero->pv_max - hero->pv;
	}
      hero->potion--;
      my_putstr("Hero ");
      my_putstr(hero->name);
      my_putstr(" use Potion\nHero ");
      my_putstr(hero->name);
      my_putstr(" gain ");
      my_put_nbr(health);
      my_putstr(" PV\nHero lose 1 Potion\n\n");
    }
}
