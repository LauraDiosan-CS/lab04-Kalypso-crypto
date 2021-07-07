#include "date.h"
#include <ostream>
#include<iostream>

date::date()
{
	this->zi = 0;
	this->luna = 0;
	this->an = 0;

}

date::date(int zi, int luna, int an)
{
	this->zi = zi;
	this->luna = luna;
	this->an = an;
}

date::date(const date& p)
{
	this->zi = p.zi;
	this->luna = p.luna;
	this->an = p.an;
}

int date::getZi()
{
	return this->zi;
}

int date::getLuna()
{
	return this->luna;
}

int date::getAn()
{
	return this->an;
}

void date::setZi(int nouaZi)
{
	this->zi = nouaZi;
}

void date::setLuna(int nouaLuna)
{
	this->luna = nouaLuna;
}

void date::setAn(int noulAn)
{
	this->an = noulAn;
}

date& date::operator=(const date& p)
{
	this->setZi(p.zi);
	this->setLuna(p.luna);
	this->setAn(p.an);
	return *this;
}

bool date::operator==(const date& p)
{
	if (this->zi == p.zi && this->luna == p.luna && this->an == p.an) return true;
	else return false;
}

date::~date()
{
	if (this->zi) {
		this->zi = 0;
	}
	if (this->luna) {
		this->luna = 0;
	}
	if (this->an) {
		this->an = 0;
	}
}

ostream& operator<<(ostream& os, const date& d)
{
	os << d.zi << "." << d.luna << "." << d.an;
	return os;
}
