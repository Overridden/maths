/*
** 201Yams.h for 201 in /home/guirou_v/rendu/201yams
** 
** Made by GUIROU Vincent
** Login   <guirou_v@epitech.net>
** 
** Started on  Mon Feb 17 15:21:15 2014 GUIROU Vincent
** Last update Mon Feb 17 21:54:01 2014 GUIROU Vincent
*/

#ifndef __201_YAMS_H__
# define __201_YAMS_H__

# include <iostream>
# include <string>
# include "stdlib.h"
# include <stdio.h>
# include "math.h"

enum result_type
  {
    PAIRE,
    BRELAN,
    CARRE,
    FULL,
    SUITE,
    YAMS
  };

# define BAD_REQUEST "Veuillez relancer avec le format suivant\n"\
  "Dès1 Dès2 Dès3 Dès4 Dès5 résultat\n"
# define NB_FACE 6
# define RESULT_PLACE 5

#endif //__201_YAMS_H__
