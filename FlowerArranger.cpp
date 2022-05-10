#pragma once
#include "FlowerArranger.h"
#include "Person.h"

//Yosef Avraham Hadad
	void FlowerArranger::arrangeFlowers(FlowersBouquet* flowerBouquet) {
		cout << getName() << " arranges Flowers\n";
	}
	string FlowerArranger::getName() {
		return "Flower Arranger " + Person::getName();
	}

