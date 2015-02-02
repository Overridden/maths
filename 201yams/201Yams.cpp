/*
** 201Yams.c for Yams in /home/guirou_v/rendu/201yams
** 
** Made by GUIROU Vincent
** Login   <guirou_v@epitech.net>
** 
** Started on  Mon Feb 17 15:59:02 2014 GUIROU Vincent
// Last update Mon Feb 17 21:48:12 2014 GUIROU Vincent
*/

#include "201Yams.h"

result_type	get_result_type(std::string &str)
{
  result_type	type;

  if (str.at(0) == 'p')
    {
      type = PAIRE;
      str = str.substr(6);
    }
  else if (str.at(0) == 'b')
    {
      type = BRELAN;
      str = str.substr(7);
    }
  else if (str.at(0) == 'c')
    {
      type = CARRE;
      str = str.substr(6);
    }
  else if (str.at(0) == 'f')
    {
      type = FULL;
      str = str.substr(5);
    }
  else if (str.at(0) == 'y')
    {
      type = YAMS;
      str = str.substr(5);
    }
  else if (str.at(0) == 's')
    {
      type = SUITE;
      str = str.substr(6);
    }
  return (type);
}

int		*set_expected(result_type type, std::string &asked_result)
{
  int		*expected;
  int		count = -1;
  
  expected = (int*)malloc(sizeof(int) * 6);
  if (type == PAIRE)
    expected[asked_result.at(0) - 49] = 2;
  else if (type == BRELAN)
    expected[asked_result.at(0) - 49] = 3;
  else if (type == CARRE)
    expected[asked_result.at(0) - 49] = 4;
  else if (type == YAMS)
    expected[asked_result.at(0) - 49] = 5;
  else if (type == FULL)
    {
      expected[asked_result.at(0) - 49] = 3;
      expected[asked_result.at(2) - 49] = 2;
    }
  else if (type == SUITE)
    {
      expected[asked_result.at(0) - 49] = 1;
      expected[asked_result.at(0) - 50] = 1;
      expected[asked_result.at(0) - 51] = 1;
      expected[asked_result.at(0) - 52] = 1;
      expected[asked_result.at(0) - 53] = 1;
    }
  return (expected);
}

int		*sub_asked(int *expected, char **request)
{
  int		i = -1;
  char		c;

  while (++i < 6)
    {
      c = request[i][0] - '0' - 1;
      expected[c] -= 1;
      if (expected[c] < 0)
	expected[c] = 0;
    }
  return (expected);
}

double		get_count(int *expected, char **request)
{
  int           i = -1;
  char          c;
  double	count = 0.0;

  while (++i < 6)
    {
      if (expected[i] > 0)
	count += expected[i];
    }
  return (5.0 - count);
}

int		compute_correct_dice(char **request)
{
  int		*expected;
  result_type	type;
  std::string	*asked_result = new std::string(request[RESULT_PLACE]);
  int		i = -1;
  int		nb_valid;
  double	count = 0;
  double	res;

  type = get_result_type(*asked_result);
  expected = set_expected(type, *asked_result); 
  expected = sub_asked(expected, request);
  count = get_count(expected, request);
  res = 3 * ((5-count)*5) / pow(6, 5-count) + (1 / pow(6, 5-count));
  res = pow(1.0/6.0, 5.0 - count);
  printf("count : %f\nres : %f\n", count, res);
}

void		compute_proba(char **av)
{
  int		nb_dice_to_relaunch;

  nb_dice_to_relaunch = 6 - compute_correct_dice(av);
}

int		main(int ac, char **av)
{
  int		ret_val;

  ret_val = 0;
  if (ac != 7)
    {
      std::cout << BAD_REQUEST;
      ret_val = -1;
    }
  else
    {
      compute_proba(av + 1);
    }
  return (ret_val);
}
