#include <iostream>
#include <string>
using namespace std;

void func(string rank, string suit) {
    cout << "Your Card: " << rank << " " << suit << endl;
}

int main() {
    string rank, suit;

    cout << "Enter rank of card (2, 3, ..., 10, J, Q, K, A): ";
    cin >> rank;
    cout << "Enter suit of card (Hearts, Diamonds, Clubs, Spades): ";
    cin >> suit;

    func(rank, suit);
}
