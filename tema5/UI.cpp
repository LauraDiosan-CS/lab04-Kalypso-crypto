#include "UI.h"
#include "functii.h"
#include <iostream>
using namespace std;
void UI::add()
{
	date d;
	char* nume = new char[0];
	float pret;
	cout << "Dati nume: ";
	cin >> nume;
	int ok = 1;
	int zi, luna, an;
	while (ok)
	{
		
		cout << "Dati ziua: ";
		cin >> zi;
		cout << "Dati luna: ";
		cin >> luna;
		cout << "Dati an: ";
		cin >> an;
		if (validare_date(zi, luna, an)) ok = 0;
		else cout << "Date gresite!" << endl;
	}
	d.setZi(zi);
	d.setLuna(luna);
	d.setAn(an);
	ok = 1;
	while (ok)
	{
		cout << "Dati pret: ";
		cin >> pret;
		if (pret > 0) ok = 0;
		else cout << "Pret gresit!" << endl;
	}
	this->service.addProd(nume, pret, d);
}

void UI::print()
{
	int lungime = this->service.getSize();
	Produs *produse = this->service.getAll();
	for (int i = 0; i < lungime; i++) cout << produse[i] << endl;
}

void UI::update_prod()
{
	date d;
	char* nume = new char[0];
	float pret;
	cout << "Dati nume: ";
	cin >> nume;
	int ok = 1;
	int zi, luna, an;
	while (ok)
	{

		cout << "Dati ziua: ";
		cin >> zi;
		cout << "Dati luna: ";
		cin >> luna;
		cout << "Dati an: ";
		cin >> an;
		if (validare_date(zi, luna, an)) ok = 0;
		else cout << "Date gresite!" << endl;
	}
	d.setZi(zi);
	d.setLuna(luna);
	d.setAn(an);
	ok = 1;
	while (ok)
	{
		cout << "Dati pret: ";
		cin >> pret;
		if (pret > 0) ok = 0;
		else cout << "Pret gresit!" << endl;
	}
	this->service.update_prod(nume, pret, d);
}

void UI::delete_proddd()
{
	cout << "Accesat";
	char* nume = new char[0];
	cout << "Dati numele produsului: ";
	cin >> nume;
	this->service.delete_prodd(nume, 1);
}

void UI::print_by_price()
{
	float pret;
	int ok = 1;
	while (ok)
	{
		cout << "Dati pret: ";
		cin >> pret;
		if (pret > 0) ok = 0;
		else cout << "Pret gresit!" << endl;
	}
	int lungime = this->service.getSize();
	Produs *lista = this->service.getAll();
	for (int i = 0; i < lungime; i++)
	{
		if (pret > lista[i].getPret()) cout << lista[i] << endl;
	}
}

void UI::discount()
{
	date d;
	int ok = 1;
	int zi, luna, an;
	while (ok)
	{

		cout << "Dati ziua: ";
		cin >> zi;
		cout << "Dati luna: ";
		cin >> luna;
		cout << "Dati an: ";
		cin >> an;
		if (validare_date(zi, luna, an)) ok = 0;
		else cout << "Date gresite!" << endl;
	}
	d.setZi(zi);
	d.setLuna(luna);
	d.setAn(an);
	this->service.discount_prod(d);
}

void UI::run()
{
	int opt;
	meniu();
	cout << "Dati o optiune: ";
	cin >> opt;
	while (opt)
	{
		switch (opt)
		{
		case 1:
			this->add();
			break;
		case 2:
			this->print();
			break;
		case 3:
			this->update_prod();
			break;
		case 4:
			cout << "accesat";
			this->delete_proddd();
			break;
		case 5:
			this->print_by_price();
			break;
		case 6:
			this->discount();
			break;
		}
		meniu();
		cout << "Dati o optiune: ";
		cin >> opt;
	}
}
