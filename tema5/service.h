#pragma once
#include "repo.h"

class Service {
private:
	Repo repo;
public:
	void addProd(char*, float, date);
	void deleteProd(Produs&);
	void updateProd(Produs&);
	Produs* getAll();
	int getSize();
	void delete_prodd(char*, int);
	void update_prod(char*, float, date);
	void discount_prod(date);
	void print_products(float, Produs&);
};