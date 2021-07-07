#include "produs.h"
#include <iostream>
#include <string.h>

Produs::Produs()
{
	this->nume = NULL;
	this->pret = 0;
	date d(0, 0, 0);
	this->stoc = d;
}

Produs::Produs(char* nume, float pret, date stoc)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, 1 + strlen(nume), nume);
	this->pret = pret;
	this->stoc = stoc;

}

Produs::Produs(const Produs& p)
{
	this->nume = new char[strlen(p.nume) + 1];
	strcpy_s(this->nume, 1 + strlen(p.nume), p.nume);
	this->pret = p.pret;
	this->stoc = p.stoc;
}

char* Produs::getNume()
{
	return this->nume;
}

float Produs::getPret()
{
	return this->pret;
}

date Produs::getDate()
{
	return this->stoc;
}

void Produs::setNume(char* numeNou)
{
	if (this->nume) { delete[] this->nume; this->nume = NULL; }
	this->nume = new char[strlen(numeNou) + 1];
	strcpy_s(this->nume, strlen(numeNou) + 1, numeNou);
}

void Produs::setPret(float pretNou)
{
	this->pret = pretNou;
}

void Produs::setDate(date dataNoua)
{
	this->stoc = dataNoua;
}

Produs& Produs::operator=(const Produs& p)
{
	this->setNume(p.nume);
	this->setPret(p.pret);
	this->setDate(p.stoc);
	return *this;
}

bool Produs::operator==(const Produs& p)
{
	if (strcmp(this->nume,p.nume)==0 && this->pret == p.pret && this->stoc == p.stoc) return true;
	else return false;

}

Produs::~Produs()
{
	if (this->nume) {
		delete[] this->nume;
		this->nume = NULL;
	}
	if (this->stoc.getZi()) {
		date d(0, 0, 0);
		this->stoc = d;
	}
	if (this->pret)
		this->pret = 0;
}

std::ostream& operator <<(std::ostream& os, const Produs& expence) {
	os << std::endl << "Nume: " << expence.nume << " Data: " << expence.stoc << " Pret: " << expence.pret << std::endl;
	return os;
}
