// ruleaza porgramul

#include <iostream>
#include "ui.h"
#include "clasa.h"
#include "repo.h"
using namespace std;
void meniu()
{
	cout << "0. Exit" << endl;
	cout << "1. Adaugare" << endl;
	cout << "2. Afisare" << endl;
	cout << "Optiune: " << endl;

}
void run()
{
	int optiune = 0;
	Obiect o1;
	Repo list[50];
	meniu();
	cin >> optiune;
	while (optiune)
	{
		if (optiune == 1)
		{
			char nume[100];
			cout << "Dati nume:" << endl;
			cin >> nume;
			Obiect o1(nume);
			list->addObiect(o1);
		}
		if (optiune == 2)
		{
			int lungime = list->getSize();
			for (int i = 0; i < lungime; i++)
			{
				Obiect o = list->getElem(i);
				cout << o.getNume() << endl;
			}

		}
		meniu();
		cin >> optiune;
	}
}