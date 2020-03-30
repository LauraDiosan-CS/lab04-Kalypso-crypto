#include "functii.h"
#include <iostream>
#include "produs.h"
using namespace std;
void meniu() {
	cout << "OPTIUNI:" << endl;
	cout << "0.Exit" << endl;
	cout << "1.Adaugare" << endl;
	cout << "2.Afisare" << endl;
	cout << "3.Modificare" << endl;
	cout << "4.Stergere" << endl;
	cout << "5.Afisare produse mai ieftine decat un pret dat" << endl;
	cout << "6.Discount 10%" << endl;
}

bool validare_date(int zi, int luna, int an)
{
	int lista_zile[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (an > 0 && luna > 0 && zi > 0)
	{
		if (luna >= 1 && luna <= 12)
		{
			if (zi >= 1 && zi <= lista_zile[luna]) return true;
		}
	}
	return false;
}

bool verify_dates(date d, Produs p)
{
	cout << "accesat" << endl;
	int zi1 = d.getZi(), luna1 = d.getLuna(), anul1 = d.getAn();
	int zi2 = p.getDate().getZi(), luna2 = p.getDate().getLuna(), anul2 = p.getDate().getAn();
	cout << zi1 << " " << zi2 << endl;
	cout << luna1 << " " << luna2 << endl;
	cout << anul1 << " " << anul2 << endl;
	if (anul1 > anul2) return true;
	else
	{
		if (anul1 == anul2)
		{
			if (luna1 > luna2) return true;
			else
			{
				if (luna1 == luna2)
				{
					if (zi1 > zi2) return true;
					else return false;
				}
				else return false;
			}
		}
		else return false;
	}
	
}
