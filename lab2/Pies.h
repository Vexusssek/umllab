#if !defined(_PIES_H)
#define _PIES_H

#include "Ssak.h"
#include <string>
using namespace std;

class Pies : public Ssak {
public:
	void Zaszczekaj();
	Pies(int w, string kp, string r, string k);
private:
	string rasa;
	string kolor;
};

#endif  //_PIES_H
