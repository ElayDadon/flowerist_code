#pragma once
#include "FlowersBouquet.h"
#include <iostream>
#include <vector>
using namespace std;

FlowersBouquet::FlowersBouquet(vector<string> flowers, bool isArranged):bouquet(flowers) , isArranged(isArranged)
{
}

void FlowersBouquet::arrange()
{
	isArranged = true;
}
vector<string> FlowersBouquet::getBouquet() {
	return bouquet;
}
