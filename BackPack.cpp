#include "BackPack.hpp"
#include <iostream>
void Backpack::bust()//перебрать все растения
{
	for (auto& plant : *Backpack::harvestList())
	{
		std::cout << "i'm near of " << plant->getName() << '\n';
		while (plant->muchHarvest())
		{
			backPack_.push_back(plant->harvest());
		}
		std::cout << "now i have " << backPack_.size() << " items\n";
		std::cout << "harvest in world - " << Harvest::howMuch() << '\n';
	}
}