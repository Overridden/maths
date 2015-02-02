#ifndef __208CHEVILLETTES_H_
# define __208CHEVILLETTES_H_

#define EFF_MIN 10

#include        <string>
#include        <sstream>
#include        <iostream>

#define USAGE "Bad parameters : verif number of parameters\nPlease use \"./208chevillettes [ob0] [ob1] [ob2] [ob3] [ob4] [ob5] [ob6] [ob7] [ob8]\"\n"

#define USAGE_NEG "Bad parameters : no NEGATIF paramater\nPlease use \"./208chevillettes [ob0] [ob1] [ob2] [ob3] [ob4] [ob5] [ob6] [ob7] [ob8]\"\n"

typedef struct s_donnees
{
  int lvl;
  double nb[14];
} t_donnees;

extern t_donnees donnees[];

typedef struct s_variable
{
  double o0[2];
  double o1[2];
  double o2[2];
  double o3[2];
  double o4[2];
  double o5[2];
  double o6[2];
  double o7[2];
  double o8[2];
  double p;
}t_variable;

typedef struct s_result
{
  char *name;
  double val_Ox;
  double val_Tx;
} t_result;

void loi_binomial(double tma, t_variable *var);

#endif /* __208CHEVILLETTES_H_ */
