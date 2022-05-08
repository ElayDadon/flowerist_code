#pragma once
#include <iostream>
#include <vector>

#include "FlowersBouquet.h"
#include "person.h"
using namespace std;
class Gardener : public Person
{
public:
	Gardener(string);
	FlowersBouquet* prepareBouquet(vector<string>);
	string getName();
};

