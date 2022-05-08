#pragma once
#include <iostream>
#include <vector>
using namespace std;
class FlowersBouquet
{
private:
	vector<string> bouquet;
	bool isArranged;
public:
	FlowersBouquet(vector<string>, bool);
	void arrange();
};

