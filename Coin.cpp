// Description: Coin class implementation.
// Date: 20JUL2020
// Author: Vincent Yen

// Libraries
#include <time.h>   // time for seed
#include <stdlib.h> // srand

#include "Coin.h"

/** Constructors **/
Coin::Coin() {
    static bool rand_seed = false;
    if(!rand_seed) {
        srand(time(NULL));
    }
    rand_seed = true;
}

/** Public Functions **/
void Coin::flipCoin() {
    coin_rand = (rand() % 100) + 1;
    if (coin_rand > 50) {
        coin_face = false;
    } else {
        coin_face = true;
    }
    return;
}

int Coin::getRand() const{
    return coin_rand;
}

void Coin::checkCoin(ostream &out) const{
    char tails[6] = "Tails";
    char heads[6] = "Heads";
    
    out <<endl;
    if(coin_face) {
        out <<"Coin flipped to "<<tails<<endl;
        return;
    }
    out <<"Coin flipped to "<<heads<<endl;
    return;
}
