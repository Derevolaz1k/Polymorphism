#ifndef TREE_HPP
#define TREE_HPP

#include "Plant.hpp"
#include "Fruit.hpp"

class Tree:public Plant {
public:
	Tree():Plant("Tree", 10) {
	}
	Harvest::uPoiner harvest() {
		decreaseHarvest();
		return std::make_unique<Fruit>();
	}
};


#endif // !TREE_HPP