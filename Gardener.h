#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Gardener : public Person
{
public:
	Gardener(string);
	FlowersBouquet* prepareBouquet(vector<string>);
};

