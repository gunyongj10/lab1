#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
        int number = 0;
        cout << "Guess a number between 1 and 100: ";
        cin >> number;
        srand((unsigned)time(0));

        int randomnumber = rand()%100+1;

        if (number == randomnumber)
                cout << "You guessed right, good job" << endl;
        else if (number != randomnumber)
                cout << "You guessed the wrong number" << endl;


return 0;
}