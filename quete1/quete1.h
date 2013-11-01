/*
** quete1.h for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Fri Nov  1 19:35:53 2013 BULOT Julien
** Last update Fri Nov  1 21:20:25 2013 BULOT Julien
*/

#ifndef __QUETE1_H__
# define __QUETE1_H__

typedef struct	s_hero
{
  char		*name;
  int		pv;
  int		pm;
}		t_hero;

typedef struct	s_monster
{
  char		*name;
  int		pv;
  int		pm;
}		t_monster;

void	initialization_hero(t_hero *hero, char **argv);
void	initialization_monster(t_monster *monster);

#endif
