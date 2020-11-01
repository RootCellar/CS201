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

//Using statements
using std::cout;
using std::endl;
using std::cin;

using std::vector;
using std::string;
using std::reverse;

//Function Prototypes
void clear(vector<int> &v);
bool intoVector(int i, vector<int>& v);
void bullsncows(int& bulls, int& cows, vector<int>& guess, vector<int>& answer);
void runGuess(Fl_Widget *,void *);

//Data
Fl_Box *infoBox;
Fl_Input *input;
Fl_Box *output;

int main() {
  Fl_Button *button;
  button = new Fl_Button(50,50,100,100,"Guess");
  button->callback(runGuess);

  infoBox = new Fl_Box(150, 150, 160, 50,
    "Enter a string to have truncated: "
  );

  input = new Fl_Input(150,200,200,25,"Input:");

  output = new Fl_Box(150, 230, 160, 50,
    "OUTPUT HERE"
  );


  return Fl::run();
}

void runGuess(Fl_Widget *,void *) {

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

    cout << g << endl;

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
