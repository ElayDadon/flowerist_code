#pragma once
#include "DeliveryPerson.h"
#include "Person.h"
#include "FlowersBouquet.h"
void DeliveryPerson::deliver(Person* person, FlowersBouquet* FlowersBouquet) 
{
	cout << getName() << " delivers flowers to " << person->getName() << "\n";	
}
string DeliveryPerson::getName() {
	return "Delivery Person " + Person::getName();
}