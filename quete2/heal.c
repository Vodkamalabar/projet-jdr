/*
** heal.c for quete2 in /Users/leon/projet-jdr/quete2
** 
** Made by CHEVALLIER Alain
** Login   <cheval_a@etna-alternance.net>
** 
** Started on  Sat Nov  2 14:07:19 2013 CHEVALLIER Alain
** Last update Sat Nov  2 17:16:13 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

void	heal(t_hero *hero)
{
  int	health;

  health = hero->pv_max * 0.25;
  if (hero->pv > hero->pv_max - health)
    health = hero->pv_max - hero->pv;
  hero->pm -= 3;
  my_putstr("Hero ");
  my_putstr(hero->name);
  my_putstr(" use heal\nHero ");
  my_putstr(hero->name);
  my_putstr(" gain ");
  my_put_nbr(health);
  my_putstr(" PV\nHero lose 3 PM\n\n");
}
