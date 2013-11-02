/*
** critic.c for quete2 in /Users/julienbulot/Documents/projet-jdr/quete2
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Sat Nov  2 17:51:35 2013 BULOT Julien
** Last update Sat Nov  2 17:53:10 2013 BULOT Julien
*/

#include <stdlib.h>
#include <time.h>

int	critic()
{
  int	i;

  srand(time(NULL));
  i = rand() % 10;
  if (i == 0)
    return (1);
  else
    return (0);
}
