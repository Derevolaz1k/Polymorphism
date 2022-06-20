#pragma once
#include <vector>
#include <algorithm>

#include "Harvest.hpp"
#include "Plant.hpp"
#include "Tree.hpp"
#include "Bush.hpp"
#include "Grass.hpp"

using Environment = std::shared_ptr<std::vector<std::unique_ptr<Plant>>>;
Environment Init();
//using Backpack = std::vector<std::unique_ptr<Harvest>>;