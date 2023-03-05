/** @file */
#pragma once

/**
 * @brief Para zawieraj�ca tablice typu wektor "l" zawieraj�ca wierzcho�ki pierwszej grupy oraz "p" wierzcho�ki drugiej grupy.
 * @param kolor tablica okre�laj�ca "kolory"(grupy) poszczeg�lnych wierzcho�k�w, 1 je�li nale�y do grupy pierwszej oraz 0 je�li do grupy drugiej.
*/
std::pair<std::vector<int>, std::vector<int>> grupuj_wierzcholki_grafu_dwudzielnego(const std::vector<int>& kolor);