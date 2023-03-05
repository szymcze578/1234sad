#include<iostream>
#include<vector>

using namespace std;

std::pair<vector<int>, vector<int>> grupuj_wierzcholki_grafu_dwudzielnego(const std::vector<int>& kolor)
{

	vector<int>P, D;

	for (int i = 0; i < kolor.size(); i++)
	{
		if (kolor[i] == 1)
			P.push_back(i);

		else
			D.push_back(i);

	}

	return pair<vector<int>, vector<int>>{P, D};
}