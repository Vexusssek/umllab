#include "Pies.h"
#include <iostream>

using namespace std;

void Pies::Zaszczekaj() {
    cout << "Pies szczeka!" << endl;
}

Pies::Pies(int w, string kp, string r, string k) : Ssak(w, kp), rasa(r), kolor(k) {}


