#pragma once
#include "produs.h"
class Repo
{
private:
	Produs produse[10];
	int index;
public:
	Repo();
	void addProdus(Produs e);
	void updateProdus(Produs e);
	void deleteProdus(Produs e);
	void update(Produs e, int pos);
	Produs getElem(int pos);
	Produs* getAll();
	int getSize();
	~Repo();
	void delete_prod(int);
};

