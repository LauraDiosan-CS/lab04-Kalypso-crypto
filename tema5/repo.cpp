#include "repo.h"
#include "produs.h";
#include <string.h>
Repo::Repo() {
	this->index = 0;
}

Repo::~Repo() {
	this->index = 0;
}

void Repo::delete_prod(int i)
{
	while (i < this->index) {
		if (i + 1 < this->index)
			this->produse[i] = this->produse[i + 1];
		i++;
	}
	this->index--;
}

Produs Repo::getElem(int pos) {
	return this->produse[pos];
}

void Repo::addProdus(Produs e) {
	this->produse[this->index++] = e;
}

Produs* Repo::getAll() {
	return this->produse;
}

int Repo::getSize() {
	return this->index;
}

void Repo::update(Produs e, int pos) {
	this->produse[pos] = e;
}

void Repo::updateProdus(Produs e) {
	int n = this->getSize();
	Produs* vector = this->getAll();
	for (int i = 0; i < n; i++) {
		if (strcmp(e.getNume(), vector[i].getNume()) == 0) {
			vector[i] = e;
		}
	}
}

void Repo::deleteProdus(Produs e) {
	for (int i = 0; i < this->index; i++) {
		if (strcmp(e.getNume(), this->produse[i].getNume()) == 0) {
			for (int j = i; j < this->index - 1; j++) {
				this->produse[j] = this->produse[j + 1];
			}
			this->index--;
		}
	}
}