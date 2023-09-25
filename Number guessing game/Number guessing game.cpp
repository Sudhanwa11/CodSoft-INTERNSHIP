#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand ((unsigned int) time(NULL));
    int number = (rand() % 100) + 1; // 0-99 + 1 -> 1-100
    int guess = 0;
    
    do {
        cout << "Enter your guess (1-100): ";
        cin >> guess;
        if (guess > number) {
            cout << "Guess Lower!" <<endl;
        }
        else if (guess < number) {
            cout << "Guess Higher!" <<endl;
        }  
        else {
            cout << "Victory!!! YOU WON" <<endl;
        }
    } while (guess != number);
    
    return 0;
}
