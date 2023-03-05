/** @file */
#pragma once


/**
 * @brief Funkcja pokazuje wyniki wykonywanych operacji na ekran.
 * 
 * Funkcja wy�wietla wyniki sprawdzania dwudzielno�ci grafu. Informuj� czy jest on dwudzielny czy te� nie i wydaje odpowiedni komunikat. W przypadku gdy graf jest dwudzielny wy�wietlane s� tak�e wierzcho�ki nale��ce do poszczeg�lnych grup.
 * 
 * @param dwudzielny zmienna przechowuj�ca wyniki badania dwudzielno�ci, "true" je�li dwudzielny, "false" je�li nie.
 * @param wierzcholki para tablic zawieraj�cych wierzcho�ki pierwszej i drugiej grupy.
*/
void pokaz_wyniki(bool dwudzielny, std::pair<std::vector<int>, std::vector<int>> wierzcholki);


/**
 * @brief Funkcja zapisuje wyniki wykonanych operacji do pliku wyj�ciowego.
 * 
 * Funkcja zapisuje wyniki sprawdzania dwudzielno�ci grafu. Zapisuje informacje czy jest on dwudzielny czy te� nie. W przypadku gdy graf jest dwudzielny zapisywane s� tak�e wierzcho�ki nale��ce do poszczeg�lnych grup.
 * 
 * @param plik_wyjsciowy plik do kt�rego zostan� zapisane wyniki operacji.
 * @param dwudzielny zmienna przechowuj�ca wyniki badania dwudzielno�ci, "true" je�li dwudzielny, "false" je�li nie.
 * @param wierzcholki para tablic zawieraj�cych wierzcho�ki pierwszej i drugiej grupy.
*/
void zapisz_wyniki(std::string plik_wyjsciowy, bool dwudzielny, std::pair<std::vector<int>, std::vector<int>> wierzcholki);

/**
 * @brief Funkcja wypisuje zar�wno do pliku jak i na ekran graf na kt�rym operujemy.
 * 
 * Funkcja wy�wietla zadany graf oraz zapisuje go pliku wyj�ciowego.
 * @param plik_wejsciowy Plik wej�ciowy z kt�rego s� pobierane wierzcho�ki grafu.
 * @param plik_wyjsciowy Plik wyj�ciowy do kt�rego wierzcho�ki grafu b�d� zapisywane.
 * @return 
*/
bool wypisz_graf(std::string plik_wejsciowy, std::string plik_wyjsciowy);

/**
 * @brief Funkcja wy�wietlaj�ca odpowiedni komunikat gdy parametry potrzebne do uruchomienia programu, wprowadzone przez u�ytkownika s� niepoprawne.
*/
void Niewlasciwe_parametry();

/**
*  @brief Funkcja wy�wietlaj�ca  podpowied� dla u�ytkownika gdy nie uda�o si� otworzy� pliku wej�ciowego. 
*/
void nie_otwarto_pliku();