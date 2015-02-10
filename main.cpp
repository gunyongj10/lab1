
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {

        int number, guess;
        srand((unsigned)time(0));
        number = rand()%100+1;

        do {
                cout << "Guess a number between 1 and 100: ";
                cin >> guess;
        if (guess < number)
                cout << "Your guess is to low, guess a larger number" << endl;
        else if (guess > number)
                cout << "Your guess is to high, guess a smaller number" << endl;
        else
                cout << "You guessed the right number, good job!" << endl;

        } while (guess != number);

return 0;
}
