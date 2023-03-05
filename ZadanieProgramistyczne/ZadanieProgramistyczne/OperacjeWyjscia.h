/** @file */
#pragma once


/**
 * @brief Funkcja pokazuje wyniki wykonywanych operacji na ekran.
 * 
 * Funkcja wyœwietla wyniki sprawdzania dwudzielnoœci grafu. Informujê czy jest on dwudzielny czy te¿ nie i wydaje odpowiedni komunikat. W przypadku gdy graf jest dwudzielny wyœwietlane s¹ tak¿e wierzcho³ki nale¿¹ce do poszczególnych grup.
 * 
 * @param dwudzielny zmienna przechowuj¹ca wyniki badania dwudzielnoœci, "true" jeœli dwudzielny, "false" jeœli nie.
 * @param wierzcholki para tablic zawieraj¹cych wierzcho³ki pierwszej i drugiej grupy.
*/
void pokaz_wyniki(bool dwudzielny, std::pair<std::vector<int>, std::vector<int>> wierzcholki);


/**
 * @brief Funkcja zapisuje wyniki wykonanych operacji do pliku wyjœciowego.
 * 
 * Funkcja zapisuje wyniki sprawdzania dwudzielnoœci grafu. Zapisuje informacje czy jest on dwudzielny czy te¿ nie. W przypadku gdy graf jest dwudzielny zapisywane s¹ tak¿e wierzcho³ki nale¿¹ce do poszczególnych grup.
 * 
 * @param plik_wyjsciowy plik do którego zostan¹ zapisane wyniki operacji.
 * @param dwudzielny zmienna przechowuj¹ca wyniki badania dwudzielnoœci, "true" jeœli dwudzielny, "false" jeœli nie.
 * @param wierzcholki para tablic zawieraj¹cych wierzcho³ki pierwszej i drugiej grupy.
*/
void zapisz_wyniki(std::string plik_wyjsciowy, bool dwudzielny, std::pair<std::vector<int>, std::vector<int>> wierzcholki);

/**
 * @brief Funkcja wypisuje zarówno do pliku jak i na ekran graf na którym operujemy.
 * 
 * Funkcja wyœwietla zadany graf oraz zapisuje go pliku wyjœciowego.
 * @param plik_wejsciowy Plik wejœciowy z którego s¹ pobierane wierzcho³ki grafu.
 * @param plik_wyjsciowy Plik wyjœciowy do którego wierzcho³ki grafu bêd¹ zapisywane.
 * @return 
*/
bool wypisz_graf(std::string plik_wejsciowy, std::string plik_wyjsciowy);

/**
 * @brief Funkcja wyœwietlaj¹ca odpowiedni komunikat gdy parametry potrzebne do uruchomienia programu, wprowadzone przez u¿ytkownika s¹ niepoprawne.
*/
void Niewlasciwe_parametry();

/**
*  @brief Funkcja wyœwietlaj¹ca  podpowiedŸ dla u¿ytkownika gdy nie uda³o siê otworzyæ pliku wejœciowego. 
*/
void nie_otwarto_pliku();