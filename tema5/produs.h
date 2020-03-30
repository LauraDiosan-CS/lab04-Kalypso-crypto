#pragma once
#include "date.h"

class Produs {
private:
	char* nume;
	float pret;
	date stoc;
public:
	Produs();
	Produs(char*, float, date);
	Produs(const Produs&);

	char* getNume();
	float getPret();
	date getDate();

	void setNume(char*);
	void setPret(float);
	void setDate(date);

	Produs& operator = (const Produs&);
	bool operator == (const Produs&);
	friend std::ostream& operator << (std::ostream&, const Produs&);
	~Produs();
};