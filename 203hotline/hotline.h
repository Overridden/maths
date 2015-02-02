/*
** hotline.h for 203 in /home/nguye_1/rendu/203hotline
**
** Made by Alexandre NGUYEN
** Login   <nguye_1@epitech.net>
**
** Started on  Fri Mar 28 18:01:50 2014 Alexandre NGUYEN
** Last update Fri Mar 28 18:04:08 2014 Alexandre NGUYEN
*/

#ifndef HOTLINE_H_
# define HOTLINE_H_

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <cmath>
#include <ctime>

#include "exception.hpp"
#include "sdlglutils.h"
#include "tutorial.hpp"
#include "hotline.h"

#define	TIME (float)((((float)clock() - (float)begin_time) / (float)CLOCKS_PER_SEC)) * 1000

void            sad();
long double     factoriel(long double nb);
long double     combinaison(int a1, int a2);
void		option_one(char *arg1, char *arg2);
void		option_two(char *arg);
int		hotline(int ac, char **av);
int		main(int ac, char **av);

#endif /* HOTLINE_H_ */
