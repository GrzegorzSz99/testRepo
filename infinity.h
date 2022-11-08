#ifndef __INFINITY_H_
#define __INFINITY_H_

//! \brief Klasa reprezentujaca ciagi dowolnej dlugosci
//!
//!

class Infinity
{
public:
	//! \brief Konstruktor domyslny
	//!
	//! Konstruktor z parametrem domyslnym \a n. Konstruktor tworzy
	//! ciag zer o zadanej dlugosci.
	//! |param[in] n - dlugosc tworzonego ciagu zer.
	Infinity(int n=0);
	
private:
	//! Dlugosc zdefiniowanego ciagu.
	int mN;
	//! Tablica przechowujaca elementy ciagu.
	double mT;
	
};

#endif
