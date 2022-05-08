#pragma once
#include "Gardener.h"
#include "FlowersBouquet.h"
#include <iostream>
#include <vector>
using namespace std;

class Grower : public Person
{
private:
	Gardener* gardener;
public:
	Grower(string ,Gardener*);
	FlowersBouquet* prepareOrder(vector<string>);
	string getName();
};