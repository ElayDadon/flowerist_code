#pragma once
#include "Gardener.h"
#include "Person.h"
#include "FlowersBouquet.h"
#include <iostream>
#include <vector>
using namespace std;

Gardener::Gardener(string name):Person(name)
{}

string Gardener::getName()
{
	return "Gardener " + Person::getName();
}

FlowersBouquet* Gardener::prepareBouquet(vector<string> flowers)
{
	cout << getName() << "prepares flowers" << endl;
	FlowersBouquet* flowersBouquet = new FlowersBouquet(flowers, false);
	return flowersBouquet;
}



