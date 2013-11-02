/*
** libra.c for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Fri Nov  1 23:31:26 2013 BULOT Julien
** Last update Sat Nov  2 09:26:39 2013 BULOT Julien
*/

#include "my.h"
#include "quete1.h"

void	libra(t_monster *monster)
{
  my_putstr(monster->name);
  my_putstr("\n|--PV : ");
  my_put_nbr(monster->pv);
  my_putstr("\n|--PM : ");
  my_put_nbr(monster->pm);
  my_putstr("\n\n");
}
