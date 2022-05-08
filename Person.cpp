#pragma once
#include "person.h"
#include <iostream>
#include "FlowersBouquet.h"
#include <vector>

#include "Florist.h"
using namespace std;


Person::Person(string name) : name(name) {}
void Person::orderFlowers(Florist* florist, Person* person, vector<string> flowers) {
	string flowersStr;
	for (string flower : flowers)
	{
		flowersStr = flowersStr + flower + " ";
	}
	cout << getName() << " orders flowers to" << person->getName() << " from " << florist->getName() << ": " << flowersStr << endl;;
	florist->acceptOrder(person, flowers);
}
string Person::getName()
{
	return name;
}

