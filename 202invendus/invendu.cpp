//
// invendu.cpp for 202 in /home/nguye_1/rendu/202invendus
//
// Made by Alexandre NGUYEN
// Login   <nguye_1@epitech.net>
//
// Started on  Mon Mar  3 14:43:18 2014 Alexandre NGUYEN
// Last update Mon Mar 17 12:13:18 2014 Alexandre NGUYEN
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

#include "exception.hpp"

float	formule(int arg1, int arg2, float a, float b)
{
  float	x = (float)arg1;
  float	y = (float)arg2;
  float	res;

  res = ((a - x) * (b - y)) / ((5 * a - (float)150) * (5 * b - (float)150));
  return res;
}

void	invendu(int ac, char **av)
{
  if (ac == 1 || ac == 2)
    throw error("Missing arguments");

  int	a, b;

  a = atoi(av[1]);
  b = atoi(av[2]);

  if (a <= 50)
    throw error("First argument too low: minimum is 51");
  if (b <= 50)
    throw error("Second argument too low: minimum is 51");

  std::cout << "\t\tX=10\tX=20\tX=30\tX=40\tX=50\tloi de Y" << std::endl;

  float	y;
  float	lx;
  float	ly;

  y = 10;
  ly = formule(10, y, (float)a, (float)b) +
    formule(20, y, (float)a, (float)b) +
    formule(30, y, (float)a, (float)b) +
    formule(40, y, (float)a, (float)b) +
    formule(50, y, (float)a, (float)b);
  std::cout << "Y=10\t\t" << std::setprecision(3) << std::fixed << formule(10, y, (float)a, (float)b)
	    << "\t" << formule(20, y, (float)a, (float)b)
	    << "\t" << formule(30, y, (float)a, (float)b)
	    << "\t" << formule(40, y, (float)a, (float)b)
	    << "\t" << formule(50, y, (float)a, (float)b)
	    << "\t" << ly
	    << std::endl;

  y = 20;
  ly = formule(10, y, (float)a, (float)b) +
    formule(20, y, (float)a, (float)b) +
    formule(30, y, (float)a, (float)b) +
    formule(40, y, (float)a, (float)b) +
    formule(50, y, (float)a, (float)b);
  std::cout << "Y=20\t\t" << formule(10, y, (float)a, (float)b)
	    << "\t" << formule(20, y, (float)a, (float)b)
	    << "\t" << formule(30, y, (float)a, (float)b)
	    << "\t" << formule(40, y, (float)a, (float)b)
	    << "\t" << formule(50, y, (float)a, (float)b)
	    << "\t" << ly
	    << std::endl;

  y = 30;
  ly = formule(10, y, (float)a, (float)b) +
    formule(20, y, (float)a, (float)b) +
    formule(30, y, (float)a, (float)b) +
    formule(40, y, (float)a, (float)b) +
    formule(50, y, (float)a, (float)b);
  std::cout << "Y=30\t\t" << formule(10, y, (float)a, (float)b)
	    << "\t" << formule(20, y, (float)a, (float)b)
	    << "\t" << formule(30, y, (float)a, (float)b)
	    << "\t" << formule(40, y, (float)a, (float)b)
	    << "\t" << formule(50, y, (float)a, (float)b)
	    << "\t" << ly
	    << std::endl;

  y = 40;
  ly = formule(10, y, (float)a, (float)b) +
    formule(20, y, (float)a, (float)b) +
    formule(30, y, (float)a, (float)b) +
    formule(40, y, (float)a, (float)b) +
    formule(50, y, (float)a, (float)b);
  std::cout << "Y=40\t\t" << formule(10, y, (float)a, (float)b)
	    << "\t" << formule(20, y, (float)a, (float)b)
	    << "\t" << formule(30, y, (float)a, (float)b)
	    << "\t" << formule(40, y, (float)a, (float)b)
	    << "\t" << formule(50, y, (float)a, (float)b)
	    << "\t" << ly
	    << std::endl;

  y = 50;
  ly = formule(10, y, (float)a, (float)b) +
    formule(20, y, (float)a, (float)b) +
    formule(30, y, (float)a, (float)b) +
    formule(40, y, (float)a, (float)b) +
    formule(50, y, (float)a, (float)b);
  std::cout << "Y=50\t\t" << formule(10, y, (float)a, (float)b)
	    << "\t" << formule(20, y, (float)a, (float)b)
	    << "\t" << formule(30, y, (float)a, (float)b)
	    << "\t" << formule(40, y, (float)a, (float)b)
	    << "\t" << formule(50, y, (float)a, (float)b)
	    << "\t" << ly
	    << std::endl;

  std::cout << "loi de X\t"
	    <<
    formule(10, 10, (float)a, (float)b) +
    formule(10, 20, (float)a, (float)b) +
    formule(10, 30, (float)a, (float)b) +
    formule(10, 40, (float)a, (float)b) +
    formule(10, 50, (float)a, (float)b) << "\t"
	    <<
    formule(20, 10, (float)a, (float)b) +
    formule(20, 20, (float)a, (float)b) +
    formule(20, 30, (float)a, (float)b) +
    formule(20, 40, (float)a, (float)b) +
    formule(20, 50, (float)a, (float)b) << "\t"
	    <<
    formule(30, 10, (float)a, (float)b) +
    formule(30, 20, (float)a, (float)b) +
    formule(30, 30, (float)a, (float)b) +
    formule(30, 40, (float)a, (float)b) +
    formule(30, 50, (float)a, (float)b) << "\t"
	    <<
    formule(40, 10, (float)a, (float)b) +
    formule(40, 20, (float)a, (float)b) +
    formule(40, 30, (float)a, (float)b) +
    formule(40, 40, (float)a, (float)b) +
    formule(40, 50, (float)a, (float)b) << "\t"
	    <<
    formule(50, 10, (float)a, (float)b) +
    formule(50, 20, (float)a, (float)b) +
    formule(50, 30, (float)a, (float)b) +
    formule(50, 40, (float)a, (float)b) +
    formule(50, 50, (float)a, (float)b) << "\t1"
	    << std::endl << std::endl;

  std::cout << "z\t\t20\t30\t40\t50\t60\t70\t80\t90\t100\ttotal" << std::endl;
  std::cout << "p(Z=z)\t\t" <<
    formule(10, 10, (float)a, (float)b)
	    << "\t" <<
    formule(10, 20, (float)a, (float)b) +
    formule(20, 10, (float)a, (float)b)
	    << "\t" <<
    formule(10, 30, (float)a, (float)b) +
    formule(20, 20, (float)a, (float)b) +
    formule(30, 10, (float)a, (float)b)
	    << "\t" <<
    formule(10, 40, (float)a, (float)b) +
    formule(20, 30, (float)a, (float)b) +
    formule(30, 20, (float)a, (float)b) +
    formule(40, 10, (float)a, (float)b)
	    << "\t" <<
    formule(10, 50, (float)a, (float)b) +
    formule(20, 40, (float)a, (float)b) +
    formule(30, 30, (float)a, (float)b) +
    formule(40, 20, (float)a, (float)b) +
    formule(50, 10, (float)a, (float)b)
	    << "\t" <<
    formule(20, 50, (float)a, (float)b) +
    formule(30, 40, (float)a, (float)b) +
    formule(40, 30, (float)a, (float)b) +
    formule(50, 20, (float)a, (float)b)
	    << "\t" <<
    formule(30, 50, (float)a, (float)b) +
    formule(40, 40, (float)a, (float)b) +
    formule(50, 30, (float)a, (float)b)
	    << "\t" <<
    formule(40, 50, (float)a, (float)b) +
    formule(50, 40, (float)a, (float)b)
	    << "\t" <<
    formule(50, 50, (float)a, (float)b)
	    << "\t1"
	    << std::endl << std::endl;

  std::cout << "espérance de X: "
	    <<
    ((formule(10, 10, (float)a, (float)b) +
      formule(10, 20, (float)a, (float)b) +
      formule(10, 30, (float)a, (float)b) +
      formule(10, 40, (float)a, (float)b) +
      formule(10, 50, (float)a, (float)b)) * 10) +
    ((formule(20, 10, (float)a, (float)b) +
      formule(20, 20, (float)a, (float)b) +
      formule(20, 30, (float)a, (float)b) +
      formule(20, 40, (float)a, (float)b) +
      formule(20, 50, (float)a, (float)b)) * 20) +
    ((formule(30, 10, (float)a, (float)b) +
      formule(30, 20, (float)a, (float)b) +
      formule(30, 30, (float)a, (float)b) +
      formule(30, 40, (float)a, (float)b) +
      formule(30, 50, (float)a, (float)b)) * 30) +
    ((formule(40, 10, (float)a, (float)b) +
      formule(40, 20, (float)a, (float)b) +
      formule(40, 30, (float)a, (float)b) +
      formule(40, 40, (float)a, (float)b) +
      formule(40, 50, (float)a, (float)b)) * 40) +
    ((formule(50, 10, (float)a, (float)b) +
      formule(50, 20, (float)a, (float)b) +
      formule(50, 30, (float)a, (float)b) +
      formule(50, 40, (float)a, (float)b) +
      formule(50, 50, (float)a, (float)b)) * 50) << std::endl;

  std::cout << "espérance de Y: "
	    <<
    ((formule(10, 10, (float)a, (float)b) +
      formule(20, 10, (float)a, (float)b) +
      formule(30, 10, (float)a, (float)b) +
      formule(40, 10, (float)a, (float)b) +
      formule(50, 10, (float)a, (float)b)) * 10) +
    ((formule(10, 20, (float)a, (float)b) +
      formule(20, 20, (float)a, (float)b) +
      formule(30, 20, (float)a, (float)b) +
      formule(40, 20, (float)a, (float)b) +
      formule(50, 20, (float)a, (float)b)) * 20) +
    ((formule(10, 30, (float)a, (float)b) +
      formule(20, 30, (float)a, (float)b) +
      formule(30, 30, (float)a, (float)b) +
      formule(40, 30, (float)a, (float)b) +
      formule(50, 30, (float)a, (float)b)) * 30) +
    ((formule(10, 40, (float)a, (float)b) +
      formule(20, 40, (float)a, (float)b) +
      formule(30, 40, (float)a, (float)b) +
      formule(40, 40, (float)a, (float)b) +
      formule(50, 40, (float)a, (float)b)) * 40) +
    ((formule(10, 50, (float)a, (float)b) +
      formule(20, 50, (float)a, (float)b) +
      formule(30, 50, (float)a, (float)b) +
      formule(40, 50, (float)a, (float)b) +
      formule(50, 50, (float)a, (float)b)) * 50) << std::endl;

  std::cout << "espérance de Z: "
	    <<
    (formule(10, 10, (float)a, (float)b) * 20) +
    ((formule(10, 20, (float)a, (float)b) +
      formule(20, 10, (float)a, (float)b)) * 30) +
    ((formule(10, 30, (float)a, (float)b) +
      formule(20, 20, (float)a, (float)b) +
      formule(30, 10, (float)a, (float)b)) * 40) +
    ((formule(10, 40, (float)a, (float)b) +
      formule(20, 30, (float)a, (float)b) +
      formule(30, 20, (float)a, (float)b) +
      formule(40, 10, (float)a, (float)b)) * 50) +
    ((formule(10, 50, (float)a, (float)b) +
      formule(20, 40, (float)a, (float)b) +
      formule(30, 30, (float)a, (float)b) +
      formule(40, 20, (float)a, (float)b) +
      formule(50, 10, (float)a, (float)b)) * 60) +
    ((formule(20, 50, (float)a, (float)b) +
      formule(30, 40, (float)a, (float)b) +
      formule(40, 30, (float)a, (float)b) +
      formule(50, 20, (float)a, (float)b)) * 70) +
    ((formule(30, 50, (float)a, (float)b) +
      formule(40, 40, (float)a, (float)b) +
      formule(50, 30, (float)a, (float)b)) * 80) +
    ((formule(40, 50, (float)a, (float)b) +
      formule(50, 40, (float)a, (float)b)) * 90) +
    (formule(50, 50, (float)a, (float)b) * 100) << std::endl;


}

int	main(int ac, char **av)
{
  try
    {
      invendu(ac, av);
    }
  catch (const std::exception & e)
    {
      std::cerr << e.what() << std::endl;
    }
  return 0;
}
