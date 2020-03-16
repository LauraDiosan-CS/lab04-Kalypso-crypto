#pragma once
class Obiect
{
private:
	char* nume;
public:
	Obiect();
	Obiect(char* nume);
	Obiect(const Obiect& a);
	char* getNume();
	void setNume(char* nouNume);
	Obiect& operator = (const Obiect& a);
	bool operator == (const Obiect& a);
	~Obiect();
};