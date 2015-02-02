//
// objetcs.cpp for 203 in /home/nguye_1/rendu/203hotline
//
// Made by Alexandre NGUYEN
// Login   <nguye_1@epitech.net>
//
// Started on  Fri Mar 28 17:48:57 2014 Alexandre NGUYEN
// Last update Sat Mar 29 21:27:06 2014 Alexandre NGUYEN
//

#include "objects.h"

void		cube(double x, double y, double z, double size, int methode)
{
  glBegin(GL_POLYGON);
  glColor3f( 1.0, 0.0, 0.0 );     glVertex3f(  0.5 + x, -0.5 + y, -0.5 + z);      // P1 is red
  glColor3f( 0.0, 1.0, 0.0 );     glVertex3f(  0.5 + x,  0.5 + y, -0.5 + z );      // P2 is green
  glColor3f( 0.0, 0.0, 1.0 );     glVertex3f( -0.5 + x,  0.5 + y, -0.5 + z );      // P3 is blue
  glColor3f( 1.0, 0.0, 1.0 );     glVertex3f( -0.5 + x, -0.5 + y, -0.5 + z );      // P4 is purple
  glEnd();

  // Gray side - BACK
  glBegin(GL_POLYGON);
  glColor3f(   0.2,  0.2, 0.2);
  glVertex3f(  0.5 + x, -0.5 + y, 0.5 + z + size);
  glVertex3f(  0.5 + x,  0.5 + y, 0.5 + z + size);
  glVertex3f( -0.5 + x,  0.5 + y, 0.5 + z + size);
  glVertex3f( -0.5 + x, -0.5 + y, 0.5 + z + size);
  glEnd();

  // Blue side - RIGHT
  glBegin(GL_POLYGON);
  glColor3f(   0.0,  0.2,  0.0);
  glVertex3f( 0.5 + x, -0.5 + y, -0.5 + z);
  glVertex3f( 0.5 + x,  0.5 + y, -0.5 + z);
  glVertex3f( 0.5 + x,  0.5 + y,  0.5 + z + size);
  glVertex3f( 0.5 + x, -0.5 + y,  0.5 + z + size);
  glEnd();

  // Dark red side - LEFT
  glBegin(GL_POLYGON);
  glColor3f(   0.2,  0.0,  0.0);
  glVertex3f( -0.5 + x, -0.5 + y,  0.5 + z + size);
  glVertex3f( -0.5 + x,  0.5 + y,  0.5 + z + size);
  glVertex3f( -0.5 + x,  0.5 + y, -0.5 + z);
  glVertex3f( -0.5 + x, -0.5 + y, -0.5 + z);
  glEnd();

  // Green side - TOP
  glBegin(GL_POLYGON);
  if (methode == 0)
    glColor3f(   1.0,  0.0,  0.0);
  else if (methode == 1)
    glColor3f(   0.0,  1.0,  0.0);
  else
    glColor3f(   5.0,  5.0,  5.0);
  glVertex3f(  0.5 + x,  0.5 + y,  0.5 + z + size);
  glVertex3f(  0.5 + x,  0.5 + y, -0.5 + z);
  glVertex3f( -0.5 + x,  0.5 + y, -0.5 + z);
  glVertex3f( -0.5 + x,  0.5 + y,  0.5 + z + size);
  glEnd();

  // Red side - BOTTOM
  glBegin(GL_POLYGON);
  if (methode == 0)
    glColor3f(   1.0,  0.0,  0.0);
  else if (methode == 1)
    glColor3f(   0.0,  1.0,  0.0);
  else
    glColor3f(   5.0,  5.0,  5.0);
  glVertex3f(  0.5 + x, -0.5 + y, -0.5 + z);
  glVertex3f(  0.5 + x, -0.5 + y,  0.5 + z + size);
  glVertex3f( -0.5 + x, -0.5 + y,  0.5 + z + size);
  glVertex3f( -0.5 + x, -0.5 + y, -0.5 + z);
  glEnd();
}
