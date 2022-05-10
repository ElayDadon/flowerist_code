#pragma once
#include <iostream>
#include <vector>
#include "Person.h"
#include "FlowersBouquet.h"
using namespace std;
class DeliveryPerson:public Person
{
public:
	void deliver(Person*, FlowersBouquet*);
	string getName();
	DeliveryPerson(string);
};

