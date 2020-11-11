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
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>

// For struct StringInfo definition
#include <string>
using std::string;
#include <cctype>
using std::toupper;

#include "truncstruct.hpp"

//Function Prototypes
void run(Fl_Widget *,void *);

//Data
Fl_Window *window;
Fl_Box *infoBox;
Fl_Input *input;
Fl_Box *output;

int arg(int, char **argv, int& i) {
  return i;
}

int main(int argc, char **argv) {
  int i = 0;
  Fl::args(argc,argv,i,arg);
  window = new Fl_Window(500, 500);
  Fl_Button *button;
  button = new Fl_Button(50,300,400,100,"Enter");

  infoBox = new Fl_Box(150, 150, 160, 50,
    "Enter a string to have truncated: "
  );

  input = new Fl_Input(150,200,200,25,"Input:");

  output = new Fl_Box(150, 230, 160, 50,
    "OUTPUT HERE"
  );

  button->callback(run);
  window->show(argc,argv);
  return Fl::run();
}

void run(Fl_Widget *,void *) {
  std::string data("");
  for(int i=0; i < input->size(); i++) {
    data += input->value()[i];
  }

  StringInfo trunc = trunc8(data);

  output->label(trunc.str.c_str());
}


// trunc
// (See header for description.)
StringInfo trunc(const StringInfo & stringInfo) {
	// Get input string & maxlen
	string s = stringInfo.str;
	auto maxlen = stringInfo.len;
	if (maxlen < 0) {
		maxlen = 0;
	}
	// Truncate string & get its new length
	s = s.substr(0, maxlen);
	auto len = (s.size());

	// Convert string to upper-case
	for (std::size_t i = 0; i < len; ++i) {
		s[i] = char(toupper(s[i]));
	}
	// Create return value
	return StringInfo { s, len };
}

// trunc8
// (See header for description.)
StringInfo trunc8(const string & str) {
	return trunc(StringInfo { str, 8 });
}
