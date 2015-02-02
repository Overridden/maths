//
// invendu.cpp for 202 in /home/nguye_1/rendu/202invendus
//
// Made by Alexandre NGUYEN
// Login   <nguye_1@epitech.net>
//
// Started on  Mon Mar  3 14:43:18 2014 Alexandre NGUYEN
// Last update Fri Mar 28 18:32:37 2014 Alexandre NGUYEN
//

#include "hotline.h"

void		sad()
{
  system("cat crane.txt");
}

long double	factoriel(long double nb)
{
  long double valeur = nb;
  long double resultatFact = 1;
  long double i;

  for(i = 1; i <= valeur; i++) {
    resultatFact = resultatFact * i ;
  }
  return (resultatFact);
}

long double	combinaison(int a1, int a2)
{
  long double	res = 1;
  long double	arg1 = (long double)a1; // k
  long double	arg2 = (long double)a2; // n
  long double	elem;

  if (arg1 == 0)
    return (1);
  else if (arg1 == 1)
    return (arg2);
  else
    {
      elem = 1;
      while (elem <= arg1)
	{
	  res *= arg2 - (arg1 - elem);
	  elem += 1;
	}
      res = res / factoriel(arg1);
      return res;
    }
}

void	option_one(char *arg1, char *arg2)
{
  // if (atol(arg2) > 18000)
  //   throw error("\n       Deuxième argument trop grand!\n");
  std::cout << std::setprecision(0) << std::fixed;
  std::cout << "Combinaison de " <<  arg1 << " parmis " << arg2 << " : " << combinaison(atoi(arg1), atoi(arg2)) << std::endl;
}

void	option_two(char *arg)
{
  double	p;
  double	res;
  int		a = 0;
  int		b = 3500;
  double	enc = 0;
  clock_t begin_time = clock();

  std::cout << std::setprecision(2) << std::fixed;
  p = atof(arg) / (double)28800;
  while (a < 50)
    {
      res = combinaison(a, b) * pow(p, a) * pow((1 - p), (b - a));
      if (a > 25)
	enc += res;
      // std::cout << res * 100 << " %" << std::endl;
      a += 1;
    }
  std::cout << "Loi binomiale:" << std::endl << "\t\tTemps de calcul: " << TIME << "ms " << std::endl << "\t\tProbabilité d'encombrement: " << enc * 100 << " % " << std::endl;

  begin_time = clock();
  a = 0;
  enc = 0;
  p *= 3500;
  while (a < 50)
    {
      res = (exp(-p) *  pow(p, a)) / (factoriel(a));
      if (a > 25)
	enc += res;
      // std::cout << res * 100 << " %" << std::endl;
      a += 1;
    }
  std::cout << "Loi de Poisson:" << std::endl << "\t\tTemps de calcul: " << TIME << std::fixed << "ms " << std::endl << "\t\tProbabilité d'encombrement: " << enc * 100 << " % " << std::endl;
  graphic(arg);
}

int	hotline(int ac, char **av)
{
  if (ac < 2)
    throw error("Pas assez d'argument\nUsage: ./203hotline [arg1] ([arg2])");
  else if (ac == 3)
    option_one(av[1], av[2]);
  else
    option_two(av[1]);
  return (EXIT_SUCCESS);
}

int	main(int ac, char **av)
{
  try
    {
      hotline(ac, av);
    }
  catch (const std::exception & e)
    {
      system("clear");
      std::cerr << e.what() << std::endl;
      sad();
    }
  return 0;
}
