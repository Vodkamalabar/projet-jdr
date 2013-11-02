/*
** readline.c for quete1 in /Users/leon/projet-jdr/quete1
** 
** Made by CHEVALLIER Alain
** Login   <cheval_a@etna-alternance.net>
** 
** Started on  Fri Nov  1 22:32:50 2013 CHEVALLIER Alain
** Last update Fri Nov  1 22:33:34 2013 CHEVALLIER Alain
*/

#include <stdlib.h>
#include <unistd.h>

char		*readLine()
{
  ssize_t	ret;
  char		*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
