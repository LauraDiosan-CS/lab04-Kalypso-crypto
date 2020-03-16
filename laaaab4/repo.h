#pragma once
#include "clasa.h"


class Repo
{
private:
	Obiect obiecte[100];
	int index;
public:
	Repo();
	~Repo();
	void addObiect(Obiect a);
	Obiect getElem(int pos);
	Obiect* getAll();
	int getSize();
};