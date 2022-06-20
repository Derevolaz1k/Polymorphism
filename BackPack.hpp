#pragma once
#include <vector>
#include <memory>
#include "Harvest.hpp"
#include "Header.hpp"

class Backpack
{
public:
	Backpack() {}
	void bust();
	Environment harvestList()
	{
		auto place = Init();
		return place;
	}
	std::vector<std::unique_ptr<Harvest>>::iterator begin()
	{
		return backPack_.begin();
	}
	std::vector<std::unique_ptr<Harvest>>::iterator end()
	{
		return backPack_.end();
	}
private:
	std::vector<std::unique_ptr<Harvest>> backPack_;
	
};

