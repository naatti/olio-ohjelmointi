#include <iostream>
#include <ctime>
#include "game.h"

using namespace std;

//
// Code will contain intentional typos, as presented in assignment.
//

void Game::printGameResult()
{
    cout << "You quessed the right answer = " // Intentional typo.
         << playerGuess
         << " with "
         << numOfGuesses
         << " quesses" << endl; // Intentional typo.
}

Game::Game(int value)
{
    srand(time(NULL));

    maxNumber = value;
    playerGuess = 0;
    randomNumber = (rand() % (maxNumber - 1)) + 1;
    numOfGuesses = 0;
    cout << "GAME CONSTRUCTOR: object initialized with "
         << maxNumber
         << " as a maximum value" << endl;
}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play()
{
    while(true) {
        cout << "Give your guess between 1-"
             << maxNumber << endl;
        cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess < randomNumber) {
            cout << "Your guess is too small" << endl;
        } else if (playerGuess > randomNumber) {
            cout << "Your guess is too big" << endl;
        } else if (playerGuess == randomNumber) {
            cout << "Your quess is right = " // Intentional typo.
                 << playerGuess << endl;
            printGameResult();
            break;
        } else {
            cout << "Koodissa virhe." << endl;
        }
    }
}
