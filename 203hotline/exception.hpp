//
// exception.hpp for 202 in /home/nguye_1/rendu/202invendus
//
// Made by Alexandre NGUYEN
// Login   <nguye_1@epitech.net>
//
// Started on  Mon Mar  3 14:50:11 2014 Alexandre NGUYEN
// Last update Mon Mar  3 15:00:55 2014 Alexandre NGUYEN
//

#include <iostream>
#include <sstream>
#include <exception>

class error : public std::exception
{
private:
  std::string msg;

public:
  error( const char * Msg)
  {
    std::ostringstream oss;
    oss << Msg;
    this->msg = oss.str();
  }

  virtual ~error() throw()
  {
  }

  virtual const char * what() const throw()
  {
    return this->msg.c_str();
  }
};
