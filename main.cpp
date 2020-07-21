// Description: Virtual coin flip program. Uses Coin class to simulate coin flipping with RNG of 1-100.
// Date: 20JUL2020
// Author: Vincent Yen

// Libraries
#include <iomanip>

#include "Coin.h"

using namespace std;

void coinIntro() {
    cout <<"\n\n********** Welcome to the Virtual Coin Flipping Program **********\n\n"<<endl
         <<"Press any key to begin flipping. Press 0 to exit the program \n"<<endl;
}

int main() {
    Coin quarter;
    char option;

    coinIntro();
    do {
        cout <<"Please enter a key (0 to exit): ";
        option = cin.get();
        cin.ignore(256,'\n');
        switch (option){
            case '0' :
                continue;
                break;
            default :
                quarter.flipCoin();
                quarter.checkCoin(cout);
                break;
        }
    }while(option != '0');

}