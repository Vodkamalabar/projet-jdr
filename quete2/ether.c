/*
** ether.c for quete2 in /Users/julienbulot/Documents/projet-jdr/quete2
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Sat Nov  2 15:11:15 2013 BULOT Julien
** Last update Sat Nov  2 17:45:18 2013 BULOT Julien
*/


#include "my.h"
#include "quete1.h"

void	ether(t_hero *hero)
{
  int	magic;

  magic = 12;
  if (hero->pm + magic > hero->pm_max)
    {
      magic = hero->pm_max - hero->pm;
      hero->pm = hero->pm_max;
    }
  else
    hero->pm += magic;
  hero->ether--;
  my_putstr("Hero ");
  my_putstr(hero->name);
  my_putstr(" use Ether\nHero ");
  my_putstr(hero->name);
  my_putstr(" gain ");
  my_put_nbr(magic);
  my_putstr(" PM\nHero lose 1 Ether\n\n");
}
