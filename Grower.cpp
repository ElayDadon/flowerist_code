#pragma once
#include "Grower.h"
#include "Person.h"
#include <iostream>
#include "FlowersBouquet.h"
#include <vector>
using namespace std;
Grower::Grower(string name, Gardener* gardener): Person(name) , gardener(gardener)
{}

string Grower::getName()
{
	return "Grower " + Person::getName();
}

FlowersBouquet* Grower::prepareOrder(vector<string> flowers)
{
	cout << getName() << "forwards the request to " << gardener->getName() << endl;
	FlowersBouquet* flowersBouquet =  gardener->prepareBouquet(flowers);
	cout << gardener->getName() << "returns flowers to " << getName() << endl;
	return flowersBouquet;
}




