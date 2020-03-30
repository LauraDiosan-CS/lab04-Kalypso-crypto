#include "test.h"
#include "repo.h"
#include <cassert>
#include<iostream>
#include "service.h"

void test_repo()
{
	char* nume1 = new char[100], * nume2 = new char[100], *nume3 = new char[100];
	date d1, d2, d3;
	d1.setZi(10);
	d1.setLuna(10);
	d1.setAn(1999);
	d2.setZi(20);
	d2.setLuna(6);
	d2.setAn(2000);
	d3.setZi(30);
	d3.setLuna(10);
	d3.setAn(2020);

	strcpy_s(nume1, sizeof "banana", "banana");
	strcpy_s(nume2, sizeof "caisa", "caisa");
	strcpy_s(nume3, sizeof "portocala", "portocala");

	Produs p1(nume1, 100, d1);
	Produs p2(nume2, 200, d2);
	Produs p3(nume3, 300, d3);
	Produs p4(nume2, 1000, d1);

	Repo repo;

	repo.addProdus(p1);
	repo.addProdus(p2);

	Produs e[2];
	e[0] = p1;
	e[1] = p2;

	//ADAUGARE
	
	assert(repo.getSize() == 2);
	for (int i = 0; i < repo.getSize(); i++) {

		assert(repo.getAll()[i] == e[i]);

	}

	//UPDATE

	e[1] = p4;
	repo.updateProdus(p4);
	assert(repo.getSize() == 2);
	for (int i = 0; i < repo.getSize(); i++) {
		
		assert(repo.getAll()[i] == e[i]);
	}

	//DELETE

	repo.delete_prod(0);
	assert(repo.getSize() == 1);
	assert(repo.getAll()[0] == e[1]);
	

}

void test_service()
{
	char* nume1 = new char[1000], * nume2 = new char[1000], * nume3 = new char[1000];
	Service service;
	date d1, d2, d3;
	d1.setZi(10);
	d1.setLuna(10);
	d1.setAn(1999);
	d2.setZi(20);
	d2.setLuna(6);
	d2.setAn(2000);
	d3.setZi(30);
	d3.setLuna(10);
	d3.setAn(2020);

	strcpy_s(nume1, sizeof "banana", "banana");
	strcpy_s(nume2, sizeof "caisa", "caisa");
	strcpy_s(nume3, sizeof "portocala", "portocala");

	Produs p1(nume1, 100, d1);
	Produs p2(nume2, 200, d2);
	Produs p3(nume3, 300, d3);
	Produs p4(nume2, 1000, d1);

	Repo repo;

	//ADAUGARE
	service.addProd(nume1, 100, d1);
	service.addProd(nume2, 200, d2);
	Produs e[2];
	e[0] = service.getAll()[0];
	e[1] = service.getAll()[1];

	assert(service.getSize() == 2);
	for (int i = 0; i < service.getSize(); i++) {
		assert(service.getAll()[i] == e[i]);
	}

	//UPDATE

	service.update_prod(nume1, 300, d3);
	e[0] = service.getAll()[0];
	e[1] = service.getAll()[1];
	for (int i = 0; i < service.getSize(); i++) {
		assert(service.getAll()[i] == e[i]);
	}

	//Delete

	e[0] = service.getAll()[1];
	service.delete_prodd(nume1, 1);
	for (int i = 0; i < service.getSize(); i++) {
		assert(service.getAll()[i] == e[i]);
	}

}

void teste()
{
	test_repo();
	test_service();
}
