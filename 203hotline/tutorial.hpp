//
// tutorial.hpp for tuto in /home/nguye_1/projects/OpenGL
//
// Made by Alexandre NGUYEN
// Login   <nguye_1@epitech.net>
//
// Started on  Thu Feb 13 16:33:59 2014 Alexandre NGUYEN
// Last update Fri Mar 28 18:26:40 2014 Alexandre NGUYEN
//

#ifndef TUTORIAL_HPP_
# define TUTORIAL_HPP_

#include "./hotline.h"
#include "./freeflycamera.h"
#include "./sdlglutils.h"
#include "./objects.h"

class TrackBallCamera
{
public:
  TrackBallCamera();

  virtual void OnMouseMotion(const SDL_MouseMotionEvent & event);
  virtual void OnMouseButton(const SDL_MouseButtonEvent & event);
  virtual void OnKeyboard(const SDL_KeyboardEvent & event);

  virtual void look();
  virtual void setMotionSensivity(double sensivity);
  virtual void setScrollSensivity(double sensivity);

  virtual ~TrackBallCamera();
protected:
  double _motionSensivity;
  double _scrollSensivity;
  bool _hold;
  double _distance;
  double _angleY;
  double _angleZ;
  SDL_Cursor * _hand1;
  SDL_Cursor * _hand2;
};

void            Dessiner(char *arg);
void		stop();
int             graphic(char *arg);
void            draw_bino(char *arg);
void            draw_poisson(char *arg);

#endif /* TUTORIAL_HPP_ */
