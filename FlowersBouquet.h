#pragma once
#include <iostream>
#include <vector>
using namespace std;
class FlowersBouquet
{
private:
	bool isArranged;
public:
	vector<string> bouquet;
	FlowersBouquet(vector<string>, bool);
	vector<string> getBouquet();
	void arrange();
};

