#include <iostream>
#include <string>
#include <memory>

#include "BackPack.hpp"
#include "Header.hpp"


int main()
{
	Backpack BP;
    //получить список растений
	/*auto place = Init();*/
	
	/*Backpack playerBackpack;*/

	//перебрать все растения
	/*for (auto &plant : *place) {
		std::cout << "i'm near of " << plant->getName() << '\n';
		while (plant->muchHarvest()) {
			playerBackpack.push_back(plant->harvest());
		}
		std::cout << "now i have " << playerBackpack.size() << " items\n";
		std::cout << "harvest in world - " << Harvest::howMuch() << '\n';
	}*/
	BP.bust(); //Перебрать все растения

	//ну мы же на абум скидывали всё в рюкзак
	std::random_shuffle(BP.begin(), BP.end());
	
	//сообщить что нашёл
	for (const auto &item:BP) {
		std::cout << "i found " << item->getName() << " it's " <<
			item->type() << '\n';
	}

}