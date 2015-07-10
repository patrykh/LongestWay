// The-longest-downhill.cpp : Defines the entry point for the console application.
// Wczytywanie danych
// OK - Ilo�c w�z��w <-- na tej podtawie p�tla for do wpisywania listy wez��w
// w�ze� startowy
// lista w�z��w
// Graf skierowany, wa�ony
// Alg Dijkstry z wagami ujemnymi???

#include "stdafx.h"
#include <iostream>

using namespace std;

struct stos
{
	stos * poprzedni;
	int dana;
};

void dodaj(stos ** root, int dana)
{
	stos * S = new stos;

	S->dana = dana;
	S->poprzedni = *root;
	*root = S;
}

void wyswietl(stos *root)
{
	stos * tmp = root;
	while (true){

		cout << tmp->dana << "\n";
		tmp = tmp->poprzedni;
		if (tmp->poprzedni == NULL){
			break;
		}
	}
}

void usun(stos **root)
{
	if (*root){
		stos * tmp = *root;
		*root = (*root)->poprzedni;
		cout << tmp->dana << endl;
		delete tmp;
	}
}

struct element_listy
{
	element_listy * next;
	int v;
};

int main()
{
	int ilosc_wierzcholkow = 0,
		start = 0,
		ilosc_sasiadow = 0,
		sasiad = 0,
		waga = 0;
	
	cin >> ilosc_wierzcholkow >> start;

	

	//Czyszczenie pami�ci
	for (int i = 0; i < ilosc_wierzcholkow; i++) delete[] A[i];
	delete[] A;

	return 0;
}

