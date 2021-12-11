#include <iostream>
#include <conio.h>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;
int coinToss(void) {
    int randomNumber;
    randomNumber = 1 + rand() % 2;

    return randomNumber;
}
int main() {
    int howManyTimes = 0;
    int randomNumber = 0;
    string headTail = "";
    cout << "How many times would you like to toss the coin?: ";
    cin >> howManyTimes;
    srand((time(0)));
    for (int i = 1; i <= howManyTimes; i++) {
        randomNumber = coinToss();
        if (randomNumber == 1)
            headTail = "head";
        else
            headTail = "tail";
        cout << headTail << endl;
    }
    _getch();
}
class CountSem {
    int n = 0;
    Semaphore = new Semaphore(1);
    int getN() {
        return n;
    }
    void run() {
        int temp;
        for (int i = 0; i < 10000000; i++) {
            try {
                Semaphore.acquire();
                temp = n;
                n = temp + 1;
            }
            catch (run e) {}
        }
    }
}

int afisare() {
    int i, num;
    // Take number from user
    cout << "Enter any number : ";
    cin >> num;
    cout << endl << "Natural numbers from 1 to " << num << endl;
    for (i = 1; i <= num; i++) {
        cout << i << " ";
    }
    return 0;
}
