// Description: Coin class header.
// Date: 20JUL2020
// Author: Vincent Yen

// Definition
#ifndef COIN_H_
#define COIN_H_

// Libraries
#include <iostream> // Custom input/output print stream

using namespace std;

class Coin {
    
    private:
        // Attributes
        bool coin_face;
        int coin_rand;

    public:
        /** Constructors **/
        Coin();
        // Constructs Coin object and uses checkSeed() to determine if RNG seed
        // needs to be generated.

        /** Mutators **/
        void flipCoin();
        // Uses rng between 1 and 100 to determine face of coin.
        // 1-50 is heads | 51-100 is tails
        
        /** Accessors **/
        int getRand() const;
        // Returns value of current random number

        void checkCoin(ostream &out) const;
        // Displays face of coin (heads/tails).

};

#endif