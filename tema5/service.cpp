#include "service.h"
#include "functii.h"
#include <iostream>
void Service::addProd(char* nume, float pret, date d)
{
	Produs prod(nume, pret, d);
	repo.addProdus(prod);
}

void Service::deleteProd(Produs& p)
{
	this->repo.deleteProdus(p);
}

void Service::updateProd(Produs& p)
{
	this->repo.updateProdus(p);
}

Produs* Service::getAll()
{
	return this->repo.getAll();
}

int Service::getSize()
{
	return this->repo.getSize();
}

void print_products(float pret, Produs lista)
{

}

void Service::update_prod(char* nume, float pret, date d)
{
	Produs curent_prod(nume, pret, d);
	Produs* prod = this->repo.getAll();
	//Undo undo;
	for (int i = 0; i < this->repo.getSize(); i++)
		if (strcmp(nume, prod[i].getNume()) == 0) {
			//undo = Undo(3, prod[i]);
			i = this->repo.getSize();
		}
	//this->repo_undo.add_to_stack(undo);
	this->repo.updateProdus(curent_prod);
}

void Service::discount_prod(date date) {
	int n = this->getSize();
	Produs* array = this->getAll();
	Produs aux;
	int ok = 1;

	for (int i = 0; i < n; i++) {
		if (verify_dates(date, array[i])) {

			/*if (ok == 1) {
				this->add_to_repo_undo(date, array[i]);
				ok = 0;
			}*/
			float pret = array[i].getPret();
			cout << "preeeeet" << pret - (0.1 * pret) << endl;
			array[i].setPret(pret - (0.1 * pret));
		}
	}
}

void Service::delete_prodd(char* nume, int contor)
{
	Produs* prod = this->repo.getAll();
	for (int i = 0; i < this->repo.getSize(); i++) {

		if (strcmp(nume, prod[i].getNume()) == 0) {
			//if (contor == 1) {
			//	/*Undo undo(1, prod[i]);
			//	repo_undo.add_to_stack(undo);*/
			//}
			this->repo.delete_prod(i);
		}
	}
}