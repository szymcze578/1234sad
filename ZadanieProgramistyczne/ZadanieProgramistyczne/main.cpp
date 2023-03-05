#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<list>
#include<string>
#include"Graf.h"
#include"OperacjeNaWierzcholkach.h"
#include"OperacjeWyjscia.h"

using namespace std;


int main(int argc, char* argv[])
{

	bool niewlasciwe_parametry = false;
	if (argc < 4) niewlasciwe_parametry = true;
	else
	{
		if (strcmp(argv[1], "-i") != 0) niewlasciwe_parametry = true;
		if (strcmp(argv[3], "-o") != 0) niewlasciwe_parametry = true;
	}

	if (niewlasciwe_parametry)
	{
		Niewlasciwe_parametry();
		return 0;
	}

	string plik_wejsciowy = argv[2];
	string plik_wyjsciowy = argv[4];


	Graf G;
	bool otwarte = G.czytaj_graf(plik_wejsciowy);
	if (!otwarte)
		nie_otwarto_pliku();

	if (otwarte)
	{
		vector<int>kolor(G.liczba_wierzcholkow());
		bool dwudzielny = G.czy_graf_dwudzielny(kolor);

		std::pair<vector<int>, vector<int>> wierzcholki;
		if (dwudzielny)
			wierzcholki = grupuj_wierzcholki_grafu_dwudzielnego(kolor);

		wypisz_graf(plik_wejsciowy, plik_wyjsciowy);
		pokaz_wyniki(dwudzielny, wierzcholki);
		zapisz_wyniki(plik_wyjsciowy, dwudzielny, wierzcholki);
	}

	return 0;
}