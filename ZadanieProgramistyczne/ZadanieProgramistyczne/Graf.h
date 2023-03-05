/** @file */
#pragma once

#include<vector>
#include<list>
#include<string>


/** \class Graf
 * @brief Klasa reprezentuj¹ca obiekt Graf.
 *
 * Klasa zawiera dane z wierzcho³kami grafu, oraz metody pozwalaj¹ce na wykonywanie operacji na tych wierzcho³kach.
*/
class Graf {
private:
	/**
	 * @brief Struktura danych zawieraj¹ca wierzcho³ki grafu.
	*/
	std::vector < std::list<int>>lista_sasiedztwa;
	/**
	 * @brief Funkcja sprawdzaj¹ca dwudzielnoœæ grafu poprzez przeszukiwanie w g³¹b.
	 * 
	 * Funkcja rekurencyjnie przechodzi po kolejnych wierzcho³kach grafu, przypisuje im odpowiednie wartoœci oraz okreœla czy graf jest dwudzielny czy te¿ nie.
	 * 
	 * @param v wierzcho³ek startowy od którego zaczyna siê przeszukiwanie.
	 * @param odwiedzone odwiedzone tablica okreœlaj¹ca czy wierzo³ek zosta³ ju¿ odwiedzony(true) czy te¿ nie(false).
	 * @param kolor kolor tablica okreœlaj¹ca "kolory" (grupy) poszczególnych wierzcho³ków, 1 jeœli nale¿y do grupy pierwszej oraz 0 jeœli do grupy drugiej.
	 * @return "true" jeœli graf jest dwudzielny, w przeciwnym wypadku "false".
	*/
	bool DFS_czy_dwudzielny(int v, std:: vector<bool>& odwiedzone, std::vector<int>& kolor);

public:
	/**
	 * @brief Funkcja wczytuj¹ca graf z pliku.
	 * @param plik_wejsciowy plik_wejsciowy plik z wierzcho³kami grafu.
	 * @return "true" jeœli uda³o siê wczytaæ wierzcho³ki, w przeciwnym wypadku zwraca "false".
	*/
	bool czytaj_graf(std::string plik_wejsciowy);
	/**
	 * @brief Funkcja rozpoczyna sprawdzanie dwudzielnoœci grafu.
	 * Funkcja sprawdza czy graf posiada wiêcej ni¿ jeden wierzcho³ek. Jeœli nie, operacja sprawdzania dwudzielnoœci jest koñczona. Nastêpnie w funkcji tworzona jest tablica typu vector "odwiedzone" (o wielkoœci takiej jaka jest liczba wierzcho³ków) reprezentuj¹ca informacje czy wierzcho³ek zosta³ ju¿ odwiedzony, oraz pierwszemu wierzcho³kowi s¹ przypiwyane odpowiednie wartoœci:
	 * odwiedzone = true(wierzcho³ek zosta³ odwiedzony;
	 * kolor = 1(nale¿y do pierwszej grupy);
	 * @param kolor tablica okreœlaj¹ca "kolory" (grupy) poszczególnych wierzcho³ków, 1 jeœli nale¿y do grupy pierwszej oraz 0 jeœli do grupy drugiej.
	 * @return Wynik operacji przeszukiwania przeszukiwania w g³¹b grafu, "true" jeœli dwudzielny i "false" w przeciwnym wypadku.
	*/
	bool czy_graf_dwudzielny(std::vector<int>& kolor);

	/**
	 * @brief Funkcja okreœla liczbê wierzcho³ków grafu.
	 * @return zwraca rozmiar tablicy "lista_s¹siedztwa".
	*/
	int liczba_wierzcholkow();
};

