#include <iostream>
#include <stdlib.h> //in order to use rand and srand

using namespace std; //to shorten cin and cout statements

/*
This program is a guessing game. A random number between 0 and 100 is chosen and the user must guess
the number. They are told if it is too high, too low, or correct. If it is correct, they will be told how many guesses it took and asked if they want to play again.
Alanna Croysdale 9-15-17
*/

int main()
{
  //intialize variables
  int random = 0;
  srand(time(NULL));
  char again = ' ';
  int input = -1;
  //while the player still wants to play
  while (again != 'N')
  {
    cout << "Welcome to the guessing game. Try to guess the number between 0 and 100";
    //initialize numberofguesses to 0 because the player hasn't made any guesses yet
    int numberofguesses = 0;
    //reset the random number for the next game
    random = rand() % 101;
    //while the player is guessing incorrectly
      while (input != random)
      {
	//add one to the numberofguesses because the player is making a guess
        numberofguesses++;
        cin >> input;
        if (input > random)
          {
            cout << "Your guess was too high. Guess lower.";
          }
        if (input < random)
          {
            cout << "Your guess was too low. Guess higher.";
          }
      }
      //ask the player if they want to play again. if they enter 'N', it will end the while loop
      cout << "You took " << numberofguesses << " guesses. Would you like to play again? Y or N?";
      cin >> again;
  }
  return 0;
}
