#pragma once
#include "Wholesaler.h"
#include "Person.h"
#include "FlowersBouquet.h"

Wholesaler::Wholesaler(string name, Grower* grower) : Person(name), grower(grower)
{}

string Wholesaler::getName()
{
	return "Wholesaler " + Person::getName();
}


FlowersBouquet* Wholesaler::acceptOrder(vector<string> flowers)
{
	cout << getName() << "forwards the request to " << grower->getName() << endl;
	FlowersBouquet* flowersBouquet = grower->prepareOrder(flowers);
	cout << grower->getName() << "returns the flowers to " << getName() << endl;
}

