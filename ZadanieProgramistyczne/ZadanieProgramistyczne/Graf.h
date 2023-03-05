/** @file */
#pragma once

#include<vector>
#include<list>
#include<string>


/** \class Graf
 * @brief Klasa reprezentuj�ca obiekt Graf.
 *
 * Klasa zawiera dane z wierzcho�kami grafu, oraz metody pozwalaj�ce na wykonywanie operacji na tych wierzcho�kach.
*/
class Graf {
private:
	/**
	 * @brief Struktura danych zawieraj�ca wierzcho�ki grafu.
	*/
	std::vector < std::list<int>>lista_sasiedztwa;
	/**
	 * @brief Funkcja sprawdzaj�ca dwudzielno�� grafu poprzez przeszukiwanie w g��b.
	 * 
	 * Funkcja rekurencyjnie przechodzi po kolejnych wierzcho�kach grafu, przypisuje im odpowiednie warto�ci oraz okre�la czy graf jest dwudzielny czy te� nie.
	 * 
	 * @param v wierzcho�ek startowy od kt�rego zaczyna si� przeszukiwanie.
	 * @param odwiedzone odwiedzone tablica okre�laj�ca czy wierzo�ek zosta� ju� odwiedzony(true) czy te� nie(false).
	 * @param kolor kolor tablica okre�laj�ca "kolory" (grupy) poszczeg�lnych wierzcho�k�w, 1 je�li nale�y do grupy pierwszej oraz 0 je�li do grupy drugiej.
	 * @return "true" je�li graf jest dwudzielny, w przeciwnym wypadku "false".
	*/
	bool DFS_czy_dwudzielny(int v, std:: vector<bool>& odwiedzone, std::vector<int>& kolor);

public:
	/**
	 * @brief Funkcja wczytuj�ca graf z pliku.
	 * @param plik_wejsciowy plik_wejsciowy plik z wierzcho�kami grafu.
	 * @return "true" je�li uda�o si� wczyta� wierzcho�ki, w przeciwnym wypadku zwraca "false".
	*/
	bool czytaj_graf(std::string plik_wejsciowy);
	/**
	 * @brief Funkcja rozpoczyna sprawdzanie dwudzielno�ci grafu.
	 * Funkcja sprawdza czy graf posiada wi�cej ni� jeden wierzcho�ek. Je�li nie, operacja sprawdzania dwudzielno�ci jest ko�czona. Nast�pnie w funkcji tworzona jest tablica typu vector "odwiedzone" (o wielko�ci takiej jaka jest liczba wierzcho�k�w) reprezentuj�ca informacje czy wierzcho�ek zosta� ju� odwiedzony, oraz pierwszemu wierzcho�kowi s� przypiwyane odpowiednie warto�ci:
	 * odwiedzone = true(wierzcho�ek zosta� odwiedzony;
	 * kolor = 1(nale�y do pierwszej grupy);
	 * @param kolor tablica okre�laj�ca "kolory" (grupy) poszczeg�lnych wierzcho�k�w, 1 je�li nale�y do grupy pierwszej oraz 0 je�li do grupy drugiej.
	 * @return Wynik operacji przeszukiwania przeszukiwania w g��b grafu, "true" je�li dwudzielny i "false" w przeciwnym wypadku.
	*/
	bool czy_graf_dwudzielny(std::vector<int>& kolor);

	/**
	 * @brief Funkcja okre�la liczb� wierzcho�k�w grafu.
	 * @return zwraca rozmiar tablicy "lista_s�siedztwa".
	*/
	int liczba_wierzcholkow();
};

