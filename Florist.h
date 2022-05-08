#pragma once
#include <iostream>
#include <vector>
#include "Person.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include <iostream>
#include <vector>
using namespace std;
class Florist : public Person
{
private:
	Wholesaler* wholesaler;
	FlowerArranger* flowerArranger;
	DeliveryPerson* deliveryPerson;
public:
	Florist(string, Wholesaler*, FlowerArranger*, DeliveryPerson*);
	void acceptOrder(Person*, vector<string>);
	string getName();
};

