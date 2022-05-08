#pragma once
#include <iostream>
#include "FlowersBouquet.h"
#include <vector>
using namespace std;
class Florist;

class Person
{
private:
	string name;
public:
	Person(string);
	void orderFlowers(Florist*, Person*, vector<string>);
	void acceptFlowers(FlowersBouquet*);
	virtual string getName();
};