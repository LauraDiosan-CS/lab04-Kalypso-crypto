#include "repo.h"
#include "clasa.h"
#include <iostream>
#include <assert.h>
#include <string.h>


void testObiect() {
	Obiect();
	char* nume1 = new char[50];
	char* nume2 = new char[50];
	char* nume3 = new char[50];
	char* nume4 = new char[50];
	char* nume5 = new char[50];
	strcpy_s(nume1, sizeof "ana", "ana");
	strcpy_s(nume2, sizeof "ban", "ban");
	strcpy_s(nume3, sizeof "ioana", "ioana");
	strcpy_s(nume4, sizeof "ana", "ana");
	strcpy_s(nume5, sizeof "ban", "ban");
	Obiect e1(nume1), e2(nume2), e3(nume3), e4(nume4), e5(nume5);
	assert(e1 == e4);
	assert(e2 == e5);
	e3 = e4;
	assert(e3 == e4);
	e3.setNume(nume5);
	assert(e3 == e5);
}

void testRepo() {
	Repo obiecte[5];
	char* n1 = new char[50];
	char* n2 = new char[50];
	char* n3 = new char[50];
	strcpy_s(n1, sizeof "ana", "ana");
	strcpy_s(n2, sizeof "ban", "ban");
	strcpy_s(n3, sizeof "ioana", "ioana");
	Obiect o1(n1), o2(n2), o3(n3);
	Obiect a1, a2, a3;
	obiecte->addObiect(o1);
	obiecte->addObiect(o2);
	obiecte->addObiect(o3);
	obiecte->addObiect(o3);
	assert(obiecte->getSize() == 4);
	a1 = obiecte->getElem(0);
	assert(a1 == o1);
}


void runTests() {
	testRepo();
	testObiect();
}