
#include "repo.h"
Repo::Repo() {
	this->index = 0;
}
Obiect Repo::getElem(int pos) {
	return this->obiecte[pos];
}
void Repo::addObiect(Obiect e) {
	this->obiecte[this->index++] = e;
}
Obiect* Repo::getAll() {
	return this->obiecte;
}
int Repo::getSize() {
	return this->index;
}
Repo::~Repo() {
	this->index = 0;
}
