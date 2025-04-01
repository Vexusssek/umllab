#include <iostream>
#include "../Biblioteka.h"
#include "../Ksiazka.h"
#include "../Zasob.h"

using namespace std;

int main()
{
    Ksiazka ksiazka1(2345, "Pan Tadeusz", "Adam Mickiewicz", "134SDAF14F4ALTA43", 1920);
    Biblioteka biblioteka("Publiczna", "Mieckiewicza 20");
    Zasob zasob(2345);
    ksiazka1.wypozycz();
    if(zasob.sprawdzDostepnosc()) cout << "Książka dostępna" << endl;
        else cout << "Książka niedostępna" << endl;
    ksiazka1.zwroc();
        if(zasob.sprawdzDostepnosc()) cout << "Książka dostępna" << endl;
        else cout << "Książka niedostępna" << endl;
    return 0;
}
