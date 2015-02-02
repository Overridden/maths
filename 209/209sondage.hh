#ifndef __209SONDAGE_HH__
#define __209SONDAGE_HH__

#include <list>
#include <string>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <fstream>
#include <iterator>

class sondage
{
 private:
  std::list<int> table;
  std::string name;
  int nbIndividus;
  int echantillonTaille;
  long double moyM;
  long double ecartTypeS;
 public:
  sondage(char *, int);
  ~sondage();

  void          aff();
  double        my_fact(double n);

  void Population();
  void NbIndividus();
  void MoyenneM();
  void EcartTypeS();

  void EchantillonTaille();
  void NbEchantillon();

  void Moyenne();
  void EcartType();
  void EcartTypeApresS();
};

#endif
