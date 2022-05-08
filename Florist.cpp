#pragma once
#include "Florist.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include <iostream>
#include <vector>
using namespace std;

Florist::Florist(string name, Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson)
:Person(name) , wholesaler(wholesaler), flowerArranger(flowerArranger), deliveryPerson(deliveryPerson)
{}

string Florist::getName()
{
	return "florist " + Person::getName();
}


void Florist::acceptOrder(Person* person, vector<string> flowers)
{
	cout << getName() << "forwards request to " << wholesaler->getName() << endl;;
	wholesaler->acceptOrder(flowers);
}

