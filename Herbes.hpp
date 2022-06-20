#pragma once
#include "Plant.hpp"
#include "Seeds.hpp"
class Herbes: public Plant {
public:
	Herbes() : Plant("Herbes", 10) {

	}
	Harvest::uPoiner harvest()
	{
		decreaseHarvest();
		return std::make_unique<Seeds>();
	}

};

