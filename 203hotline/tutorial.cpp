//
// tutorial.cpp for opengl tutp in /home/nguye_1/projects/OpenGL
//
// Made by Alexandre NGUYEN
// Login   <nguye_1@epitech.net>
//
// Started on  Thu Feb 13 15:25:03 2014 Alexandre NGUYEN
// Last update Sat Mar 29 21:39:46 2014 Alexandre NGUYEN
//
#include "tutorial.hpp"

#define FPS 60
#define LARGEUR_FENETRE 1800
#define HAUTEUR_FENETRE 900

double angleZ = 0;
double angleX = 0;
GLuint texture1; //en variable globale

FreeFlyCamera *camera;

void stop()
{
    delete camera;
    SDL_Quit();
}

int		graphic(char *arg)
{
  SDL_Event	event;
  const Uint32 time_per_frame = 1000/FPS;
  unsigned int width = LARGEUR_FENETRE;
  unsigned int height = HAUTEUR_FENETRE;

  Uint32 last_time,current_time,elapsed_time; //for time animation
  Uint32 start_time,stop_time; //for frame limit

  SDL_Init(SDL_INIT_VIDEO);
  atexit(stop);

  SDL_WM_SetCaption("203hotline", NULL);
  SDL_SetVideoMode(width, height, 32, SDL_OPENGL);
  //initFullScreen(&width,&height);

  glMatrixMode( GL_PROJECTION );
  glLoadIdentity( );
  gluPerspective(70,(double)width/height,0.001,1000);

  glEnable(GL_DEPTH_TEST);
  glEnable(GL_TEXTURE_2D);
  texture1 = loadTexture("lastru_g.jpg");

  camera = new FreeFlyCamera(Vector3D(50, -50, 50));

  last_time = SDL_GetTicks();
  for (;;)
    {
      start_time = SDL_GetTicks();
      while (SDL_PollEvent(&event))
        {
            switch(event.type)
            {
                case SDL_QUIT:
                exit(0);
                break;
                case SDL_KEYDOWN:
                switch (event.key.keysym.sym)
                {
                    case SDLK_ESCAPE:
                    exit(0);
                    break;
                    default :
                    camera->OnKeyboard(event.key);
                }
                break;
                case SDL_KEYUP:
                camera->OnKeyboard(event.key);
                break;
                case SDL_MOUSEMOTION:
                camera->OnMouseMotion(event.motion);
                break;
                case SDL_MOUSEBUTTONUP:
                case SDL_MOUSEBUTTONDOWN:
                camera->OnMouseButton(event.button);
                break;
            }
        }

      current_time = SDL_GetTicks();
      elapsed_time = current_time - last_time;
      last_time = current_time;

      camera->animate(elapsed_time);

      Dessiner(arg);

        stop_time = SDL_GetTicks();
        if ((stop_time - last_time) < time_per_frame)
        {
            SDL_Delay(time_per_frame - (stop_time - last_time));
        }

    }

  return 0;
}

void		Dessiner(char *arg)
{
  glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
  glBindTexture(GL_TEXTURE_2D, texture1);

  glMatrixMode( GL_MODELVIEW );
  glLoadIdentity( );

  camera->look();

  /* Dessin 3D */

  draw_bino(arg);
  draw_poisson(arg);

  int	j = -1;
  while (j++ < 15)
    cube(-2, 0, j * 4, 0.2, 3);

  int	i = 0;
  while (i++ < 50)
    cube(i * 3, 0, -4, 0.2, 3);

  // cube(0, 0, 0, 1);
  // cube(2, 0, 0, 2);
  // cube(4, 0, 0, 3);
  // cube(6, 0, 0, 4);
  // cube(8, 0, 0, 2);

  glFlush();
  SDL_GL_SwapBuffers();
}


void		draw_bino(char *arg)
{
  double	res;
  double	p;
  int		a = 0;
  int		b = 3500;

  p = atof(arg) / (double)28800;
  while (a < 50)
    {
      res = combinaison(a, b) * pow(p, a) * pow((1 - p), (b - a));
      a += 1;
      cube(a * 3, 0, 0, res * 400, 0);
    }
}

void		draw_poisson(char *arg)
{
  double	res;
  double	p;
  int		a = 0;

  p = atof(arg) / (double)28800;
  p *= 3500;
  while (a < 50)
    {
      res = (exp(-p) *  pow(p, a)) / (factoriel(a));
      a += 1;
      cube(a * 3 + 1, 0, 0, res * 400, 1);
    }

}
