#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<string>
#include"Graf.h"
#include"OperacjeWyjscia.h"
#include"OperacjeNaWierzcholkach.h"

using namespace std;

bool wypisz_graf(string plik_wejsciowy, string plik_wyjsciowy)
{
	int u, v;

	ifstream plik_wej(plik_wejsciowy);
	ofstream plik_wyj(plik_wyjsciowy);

	if (!plik_wej)
	{
		cerr << "Nie uda³o sie otworzyc pliku!" << endl;
		return false;
	}

	while (plik_wej >> u >> v)
	{

		cout << u << " " << v << endl;
		plik_wyj<< u << " " << v << endl;

	}

	return true;
}

void pokaz_wyniki (bool dwudzielny, std::pair<std::vector<int>, std::vector<int>> wierzcholki)
{

	if (dwudzielny)
	{
		cout << "Graf dwudzielny." << endl;
		cout << "Wierzcholki pierwszej grupy to: ";
		for (int u = 0; u < wierzcholki.first.size(); u++)
			cout << wierzcholki.first[u] << " ";

		cout << endl;

		cout << "Wierzcholki drugiej grupy to: ";
		for (int v = 0; v < wierzcholki.second.size(); v++)
			cout << wierzcholki.second[v] << " ";

		cout << endl;
	}
	else
	{
		cout << "Graf nie jest dwudzielny." << endl;
	}
}

void zapisz_wyniki(string plik_wyjsciowy, bool dwudzielny, std::pair<std::vector<int>, std::vector<int>> wierzcholki)
{

	ofstream plik_wyj(plik_wyjsciowy, ios::app);

	if (dwudzielny)
	{
		plik_wyj << "Graf dwudzielny." << endl;
		plik_wyj << "Wierzcholki pierwszej grupy to: ";
		for (int u = 0; u < wierzcholki.first.size(); u++)
			plik_wyj << wierzcholki.first[u] << " ";

		plik_wyj << endl;

		plik_wyj << "Wierzcholki drugiej grupy to: ";
		for (int v = 0; v < wierzcholki.second.size(); v++)
			plik_wyj << wierzcholki.second[v] << " ";

		plik_wyj << endl;

	}
	else
	{
		plik_wyj << "Graf nie jest dwudzielny." << endl;
	}

	plik_wyj.close();

	
}

void Niewlasciwe_parametry()
{
	cout << "\nProgram sprawdza dwudzielnosc grafu.\n";
	cout << "Plik wejsciowy powinien zawierac numery wierzcholkow grafu sasiadujacych ze soba.\nPrzykladowy plik wejsciowy:\n";
	cout << "\n 0 1 \n 0 2 \n 1 3 \n 2 3\n\n";
	cout << "Podano niewlasciwe parametry otwarcia programu!\n";
	cout << "Aby poprawnie uruchomic program nalezy podac nastepujace parametry:\n\n";
	cout << "-i nazwa_pliku_wejsciowego.txt \n-o nazwa_pliku_wyjsciowego.txt\n";

}


void nie_otwarto_pliku()
{
	cout << "\nSprawdz czy podales prawidlowa nazwe pliku, lub czy taki plik istnieje.\n";
}