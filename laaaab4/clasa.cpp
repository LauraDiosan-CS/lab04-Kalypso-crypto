#include "clasa.h"
#include <iostream>
#include <string.h>

Obiect::Obiect() {
	this->nume = NULL;
}
Obiect::Obiect(char* nume) {
	this->nume = new char[strlen(nume) + 1];

	strcpy_s(this->nume, 1 + strlen(nume), nume);
}

Obiect::Obiect(const Obiect& o) {
	this->nume = new char[strlen(o.nume) + 1];
	strcpy_s(this->nume, 1 + strlen(o.nume), o.nume);
}

char* Obiect::getNume() {
	return this->nume;
}
void Obiect::setNume(char* newName) {
	if (this->nume) {
		delete[] this->nume;
	}
	this->nume = new char[strlen(newName) + 1];
	strcpy_s(this->nume, strlen(newName) + 1, newName);
}
Obiect& Obiect::operator=(const Obiect& e) {
	this->setNume(e.nume);
	return *this;
}
bool Obiect:: operator==(const Obiect& s) {
	return strcmp(this->nume, s.nume) == 0;
}
Obiect::~Obiect() {
	if (this->nume) {
		delete[] this->nume;
		this->nume = NULL;
	}
}