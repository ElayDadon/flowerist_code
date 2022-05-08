#pragma once
#include "person.h"
#include <iostream>
#include "FlowersBouquet.h"
#include <vector>
using namespace std;
class Person
{
private:
	string name;
public:
	Person(string name) : name(name) {}
	void orderFlowers(Florist* florist, Person* person, vector<string> flowers) {
		
	}
	string getName()
	{
		return name;
	}
};
