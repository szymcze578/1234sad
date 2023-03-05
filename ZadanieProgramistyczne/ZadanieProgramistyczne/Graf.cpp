#include<iostream>
#include<vector>
#include<list>
#include<fstream>
#include<sstream>
#include<string>
#include"Graf.h"


using namespace std;

bool Graf::czytaj_graf(string plik_wejsciowy)
{

	ifstream plikwej(plik_wejsciowy);
	int u, v;

	if (!plikwej)
	{
		cout << "Nie udalo sie otworzyc pliku " << plik_wejsciowy << endl;
		return false;
	}

	
	

	while (plikwej >> u >> v)
	{
		if (Graf::lista_sasiedztwa.size() <= u)
			Graf::lista_sasiedztwa.resize(u + 1);

		if (Graf::lista_sasiedztwa.size() <= v)
			Graf::lista_sasiedztwa.resize(v + 1);

		Graf::lista_sasiedztwa[u].push_back(v);
		Graf::lista_sasiedztwa[v].push_back(u);
	}

	return true;
}

bool Graf::czy_graf_dwudzielny(vector<int>& kolor) {

	if (Graf::lista_sasiedztwa.size() < 2)
	{
		return false;
	}

	vector<bool> odwiedzone(Graf::lista_sasiedztwa.size());
	kolor[0] = 1;
	odwiedzone[0] = true;
	int v = 0;

	return DFS_czy_dwudzielny(v, odwiedzone, kolor);
}

bool Graf::DFS_czy_dwudzielny(int v, vector<bool>& odwiedzone, vector<int>& kolor)
{

	for (int u : Graf::lista_sasiedztwa[v])
	{
		if (odwiedzone[u] == false)
		{
			odwiedzone[u] = true;
			kolor[u] = !kolor[v];
			if (!DFS_czy_dwudzielny(u, odwiedzone, kolor))
				return false;
		}
		else if (kolor[u] == kolor[v])
			return false;
	}
	return true;
}

int Graf::liczba_wierzcholkow()
{
	return Graf::lista_sasiedztwa.size();
}
