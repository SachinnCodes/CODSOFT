#include <iostream>  
using namespace std;

int main() {
    
    int Number = rand() % 100 + 1;
    int Guess = 0;

    cout << "A number have been selected from 1 to 100." <<endl;
    cout << "Can you Guess it ? " <<endl;

    while (Guess != Number) {
        cout << "What's your guess? : ";
        cin >> Guess;

        if (Guess > Number) {
            cout << "Too high! Try again." <<endl;
        } else if (Guess < Number) {
            cout << "Too low! Try again." <<endl;
        } else {
            cout << "You have guessed the correct number! Congratulations!" <<endl;
        }
    }

    return 0;
}
