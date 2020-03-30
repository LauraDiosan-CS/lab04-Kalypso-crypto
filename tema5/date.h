#pragma once
#include <ostream>
using namespace std;
class date {
private:
	int zi;
	int luna;
	int an;
public:
	date();
	date(int, int, int);
	date(const date&);
	int getZi();
	int getLuna();
	int getAn();
	void setZi(int);
	void setLuna(int);
	void setAn(int);
	date& operator = (const date&);
	bool operator == (const date&);
	friend ostream& operator<<(ostream&, const date&);
	~date();
};