//
// main.cpp for maint in /home/clariv_e//Projets/Math/209sondage
// 
// Made by erick clarivet
// Login   <clariv_e@epitech.net>
// 
// Started on  Mon Jun 11 05:55:31 2012 erick clarivet
// Last update Mon Jun 11 06:27:46 2012 erick clarivet
//

#include	"209sondage.hh"

int		main(int ac, char **av)
{
  if (ac != 3)
    {
      std::cout << "Error in your program" << std::endl;
      return (1);
    }
  sondage	son(av[1], atoi(av[2]));

  son.aff();
  return (0);
}
