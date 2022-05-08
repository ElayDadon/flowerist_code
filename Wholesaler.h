#pragma once
#include "Grower.h"
#include "FlowersBouquet.h"
#include <iostream>
#include <vector>
using namespace std;


class Wholesaler : public Person
{
private:
	Grower* grower;
public:
	Wholesaler(string, Grower*);
	FlowersBouquet* acceptOrder(vector<string>);
};