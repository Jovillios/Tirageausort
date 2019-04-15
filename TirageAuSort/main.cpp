#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
	string str;
	int nbTirage;

	cout << "Liste mots : ";
	getline(cin, str);

	cout << "Nombre de tirage: "; cin >> nbTirage;

	vector<string> listeMot;

	string mot = "";

	for (int i = 0; i <= str.size(); i++)
	{
		if (str[i] == ',' || i == str.size())
		{
			listeMot.push_back(mot);
			mot = "";
		}
		else if (str[i] == ' ')
		{

		}
		else
		{
			mot += str[i];
		}
	}

	srand(time(NULL));

	for (int i = 1; i <= nbTirage; i++)
	{
		int randIndex = rand() % listeMot.size();

		cout << "Le mot numero " << i << " est: " << listeMot[randIndex] << endl;
		vector<string> newListe;
		for (int j = listeMot.size() - 1; j >= 0; j--)
		{
			if (j != randIndex)
			{
				newListe.push_back(listeMot[j]);
			}
		}
		listeMot = newListe;

	}

	return 0;
}