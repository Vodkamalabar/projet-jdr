/*
** quete1.h for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Fri Nov  1 19:35:53 2013 BULOT Julien
** Last update Sat Nov  2 09:31:31 2013 BULOT Julien
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

char		*readLine();
t_hero		*initialization_hero(t_hero *hero, char **argv);
t_monster	*initialization_monster(t_monster *monster);
void		attack(t_hero *hero, t_monster *monster);
void		display_prompt(t_hero *hero, t_monster *monster);
void		fire(t_hero *hero, t_monster *monster);
void		libra(t_monster *monster);
void		process_action(char *action, t_hero * hero, t_monster *monster);
void		quit();
void		slash(t_hero *hero, t_monster *monsterOB);
void		stat(t_hero *hero);
void		thunder(t_hero *hero, t_monster *monster);

#endif
