#pragma once
#include <iostream>
#include <vector>
#include "FlowersBouquet.h"
#include "person.h"
using namespace std;
class FlowerArranger : public Person
{
public:
	FlowerArranger(string);
	void arrangeFlowers(FlowersBouquet*);
	string getName();
};

