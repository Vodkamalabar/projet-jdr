/*
** quete1.h for quete1 in /Users/julienbulot/Documents/projet-jdr/quete1
** 
** Made by BULOT Julien
** Login   <bulot_j@etna-alternance.net>
** 
** Started on  Fri Nov  1 19:35:53 2013 BULOT Julien
** Last update Sat Nov  2 18:17:10 2013 BULOT Julien
*/

#ifndef __QUETE1_H__
# define __QUETE1_H__

typedef struct	s_hero
{
  char		*name;
  int		pv;
  int		pv_max;
  int		pm;
  int		pm_max;
  int		potion;
  int		ether;
}		t_hero;

typedef struct	s_monster
{
  char		*name;
  int		number;
  int		pv;
  int		pm;
}		t_monster;

char		*readLine();
int		attack_hero(t_hero *hero, t_monster *monster, char *action, int critik);
int		cant_attack(t_hero *hero, char *action);
int		critic();
int		display_prompt(t_hero *hero, t_monster *monster);
int		monster_appear(t_monster *monster);
int		potion_ether(t_hero *hero, char *action);
int		process_action(char *action, t_hero * hero, t_monster *monster);
int		win(t_hero *hero, t_monster *monster);
t_hero		*initialization_hero(t_hero *hero, char **argv);
t_monster	*initialization_monster(t_monster *monster);
void		attack(t_hero *hero, t_monster *monster, int critik);
void		attack_monster(t_hero * hero, t_monster *monster, int critik);
void		bite(t_hero *hero, t_monster *monster, int critik);
void		doom(t_hero *hero, t_monster *monster, int critik);
void		ether(t_hero * hero);
void		earthquake(t_hero *hero, t_monster *monster);
void		fire(t_hero *hero, t_monster *monster, int critik);
void		heal(t_hero *hero, int critik);
void		libra(t_hero * hero, t_monster *monster);
void		potion(t_hero *hero);
void		slash(t_hero *hero, t_monster *monster, int critik);
void		stat(t_hero *hero);
void		thunder(t_hero *hero, t_monster *monster, int critik);

#endif
