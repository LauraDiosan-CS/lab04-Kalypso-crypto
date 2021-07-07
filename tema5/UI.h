#pragma once
#include "service.h"
class UI {
private:
	Service service;
	void add();
	void print();
	void update_prod();
	void delete_proddd();
	void print_by_price();
	void discount();
public:
	void run();
};
