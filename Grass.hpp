#ifndef GRASS_HPP
#define GRASS_HPP

#include "Plant.hpp"
#include "Seeds.hpp"

class Grass :public Plant {
public:
	Grass():Plant("Grass", 10) { }
	Harvest::uPoiner harvest() {
		decreaseHarvest();
		return std::make_unique<Seeds>();
	}
};

#endif // GRASS_HPP