#include <iostream>
using namespace std;

void displayMenu() {
    cout << "Welcome to Roulette!" << endl;
    cout << "1. Bet on Red/Black" << endl;
    cout << "2. Bet on a Number" << endl;
    cout << "3. Exit the Game" << endl;
}

int spinRoulette() {
    return rand() % 37; // 0 - 36
}

int getColor(int number) {
    if (number == 0) {
        return 2; // green
    }

    if (number % 2 == 0) {
        return 1; // red
    }
    else {
        return 3; // black
    }
}


int main() {
    srand(time(0));

    int balance = 1000;
    int choice;
    int bet;
    int betColor;
    int betNumber;

    int result = spinRoulette();

    while (balance > 0) {
        displayMenu();
        cout << endl << "Your balance: " << balance << " coins." << endl;
        cout << "Choose an action: ";
        cin >> choice;

        switch (choice) {
        case 1: // Bet on Red/Black/Green
            cout << "Enter your bet amount: ";
            cin >> bet;
            if (bet > balance) {
                cout << "Not enough funds for the bet." << endl;
                break;
            }
            cout << "Which color do you bet on?\n1 - red\n2 - green\n3 - black: ";
            cin >> betColor;

            cout << "The roulette stopped at: " << result << " (" << getColor(result) << ")" << endl;

            if ((betColor == 1 && getColor(result) == 1) || (betColor == 3 && getColor(result) == 3)) {  // 1 = red  3 = black
                balance += bet; // Win
                cout << "You won " << bet << " coins!" << endl;
            }
            else {
                balance -= bet; // Lose
                cout << "You lost " << bet << " coins." << endl;
            }
            break;


        case 2: // Bet on a Number
            cout << "Enter a number (0-36): ";
            cin >> betNumber;
            if (betNumber < 0 || betNumber > 36) {
                cout << "Invalid number." << endl;
                break;
            }
            cout << "Enter your bet amount: ";
            cin >> bet;
            if (bet > balance) {
                cout << "Not enough funds for the bet." << endl;
                break;
            }

            result = spinRoulette();
            cout << "The roulette stopped at: " << result << endl;

            if (result == betNumber) {
                balance += bet * 35; // Win
                cout << "You won " << bet * 35 << " coins!" << endl << endl;
            }
            else {
                balance -= bet; // Lose
                cout << "You lost " << bet << " coins." << endl << endl;
            }
            break;


        case 3:
            cout << "Thank you for playing! Your final balance: " << balance << " coins." << endl;
            return 0;

        default:
            cout << "Incorrect choice. Please try again." << endl;
        }
    }

    cout << "You are broke! Game over." << endl;
}