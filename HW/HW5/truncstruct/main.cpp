/*
 * Darian Marvel
 * 11/1/2020
 * main.cpp
 * Re-making lab 21 using FLTK
 * Which provides practice using a structure and truncates a string to 8 uppercase characters
*/

//Includes
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Overlay_Window.H>
#include <FL/Fl_Button.H>
#include <FL/fl_draw.H>

#include "truncstruct.hpp"

//Function Prototypes
void run(Fl_Widget *,void *);

//Data
Fl_Window *window;

int arg(int, char **argv, int& i) {
  return i;
}

int main(int argc, char **argv) {
  int i = 0;
  Fl::args(argc,argv,i,arg);
  window = new Fl_Window(500, 500);
  Fl_Button *button;
  button = new Fl_Button(50,300,400,100,"Enter");
  button->callback(run);
  window->show(argc,argv);
  return Fl::run();
}

void run(Fl_Widget *,void *) {

}
