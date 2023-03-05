/** @file */
#pragma once

/**
 * @brief Para zawieraj¹ca tablice typu wektor "l" zawieraj¹ca wierzcho³ki pierwszej grupy oraz "p" wierzcho³ki drugiej grupy.
 * @param kolor tablica okreœlaj¹ca "kolory"(grupy) poszczególnych wierzcho³ków, 1 jeœli nale¿y do grupy pierwszej oraz 0 jeœli do grupy drugiej.
*/
std::pair<std::vector<int>, std::vector<int>> grupuj_wierzcholki_grafu_dwudzielnego(const std::vector<int>& kolor);