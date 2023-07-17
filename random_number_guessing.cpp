#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    int num, guess, tries = 0;

    srand(time(0));         // seed random number generate
    num = rand() % 100 + 1; // random number between 1 to 100

    cout << "Guess Number Game :)" << endl;

    do
    {
        cout << "Enter your Guess Number: " << endl;
        cin >> guess;
        tries++;

        if (guess > num)
        {
            cout << "It is Higher Than Guessing Number" << endl;
        }
        else if (guess < num)
        {
            cout << "It is Lower Than Guessing Number" << endl;
        }
        else
        {
            cout << "Right Answer. You Can Guess The Number in " << tries << " Attempt" << endl;
        }

    } while (guess != num);

    return 0;
}