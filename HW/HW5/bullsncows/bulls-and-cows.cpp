/*
 * Darian Marvel
 * 10/8/2020
 * bulls-and-cows.cpp
 * Making the bulls and cows number guessing game
*/

//FL Includes
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Overlay_Window.H>
#include <FL/Fl_Button.H>
#include <FL/fl_draw.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>

//Includes
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

//Using statements
using std::cout;
using std::endl;
using std::ostringstream;

using std::vector;
using std::string;
using std::reverse;

//Function Prototypes
void clear(vector<int> &v);
bool intoVector(int i, vector<int>& v);
void bullsncows(int& bulls, int& cows, vector<int>& guess, vector<int>& answer);
void runGuess(Fl_Widget *,void *);

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
  button = new Fl_Button(50,50,100,100, "Guess");
  button->callback(runGuess);

  infoBox = new Fl_Box(150, 150, 160, 50,
    "Enter a guess for bulls and cows (int): "
  );

  input = new Fl_Input(150,200,200,25,"Input:");

  output = new Fl_Box(150, 230, 200, 100,
    "OUTPUT HERE"
  );

  //Output int id of character '0'
  std::cout << ('0' + 0) << std::endl;

  window->show(argc,argv);

  return Fl::run();
}

//Run the user's guess
void runGuess(Fl_Widget *,void *) {

  vector<int> answer = {3,6,8,1};

  output->label( ( (string) "Running..." ).c_str() );

  std::string data("");
  for(int i=0; i < input->size(); i++) {
    data += input->value()[i];
  }

  int actualGuess = 0;
  int magnitude = 1;
  for(int i = data.size()-1; i >= 0; i--) {
    if( data[i] >= '0' && data[i] <= '9' ) {
      actualGuess += ( data[i] - 48 ) * magnitude;
      magnitude *= 10;
    }
    else {
      output->label( ( (string) "Invalid Input" ).c_str() );
      return;
    }
  }

  cout << actualGuess << endl;

  vector<int> guess;
  bool valid = intoVector(actualGuess, guess);

  if(!valid) {
    output->label( ( (string) "Invalid Input" ).c_str() );
    return;
  }

  reverse(guess.begin(), guess.end());

  int bulls = 0;
  int cows = 0;
  bullsncows(bulls, cows, guess, answer);
  //cout << bulls << " bulls, " << cows << " cows." << endl;

  string outputstring;
  ostringstream os;
  os << bulls << " bulls, " << cows << " cows.";
  outputstring = os.str();
  cout << outputstring << endl;
  output->label( outputstring.c_str() );

  if(bulls == 4) {
    cout << "YOU WON!" << endl;
    output->label( ( (string) "YOU WON!!!" ).c_str() );
  }

}

/*
//Original Main function for bulls and cows (from HW4)
int main() {
  vector<int> answer = {3,6,8,1};
  //reverse(answer.begin(), answer.end());
  vector<int> guess;
  int entry;
  int bulls = 0, cows = 0;

  cout << "Welcome to bulls and cows!" << endl <<
  "The object of the game is to guess a number." << endl <<
  "1 bull means you got a number right and in the right spot" << endl <<
  "1 cow means you got a number right, not necessarily in the right spot" << endl <<
  "Have Fun!" << endl
  ;

  cout << endl << endl << endl;

  while(true) {
    clear(guess);
    cout << "Enter a number as your guess: ";
    cin >> entry;
    cout << endl;

    if(entry < 0) {
      for(int n : answer) cout << n;
      cout << endl;
      continue;
    }

    bool valid = intoVector(entry, guess);
    if(!valid) {
      cout << "Sorry, your guess was not 4 digits! Please try again." << endl;
      continue;
    }

    reverse(guess.begin(), guess.end());
    bulls = 0;
    cows = 0;
    bullsncows(bulls, cows, guess, answer);
    cout << bulls << " bulls, " << cows << " cows." << endl;

    if(bulls == 4) {
      cout << "YOU WON!" << endl;
      return 1;
    }

  }

}
*/

//Find bulls and cows
void bullsncows(int& bulls, int& cows, vector<int>& guess, vector<int>& answer) {

  for(int i = 0; i < guess.size(); i++) {
    int g = guess[i];

    if(g == answer[i]) bulls++;
    else {

      bool done = false;
      for(int n : answer)
        if( !done && g==n ) {
          cows++;
          done = true;
        }

    }

  }

}

//Place an int into a vector, returning if the int has 4 digits
bool intoVector(int i, vector<int>& v) {
  int digits = 0;
  while(i > 0) {
    int digit = i % 10;
    i /= 10;
    v.push_back(digit);
    digits++;
  }

  return digits==4;
}

//Clear the given vector of ints
void clear(vector<int> &v) {
  while(v.size() > 0) {
    v.pop_back();
  }
}
