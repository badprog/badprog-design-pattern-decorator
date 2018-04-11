// Badprog.com

#include <memory>
#include <iostream>
#include "DShipTiny.h"
#include "DecoratorShield.h"
#include "DecoratorWeapon.h"
#include "DecoratorBomb.h"

//-----------------------------------------------------------------------------
// Main
//-----------------------------------------------------------------------------
int main()
{
	auto ship = std::make_unique<DecoratorShield>(
					std::make_unique<DecoratorWeapon>(
						std::make_unique<DecoratorBomb>(
							std::make_unique<DShipTiny>())));

	double weightByDefault = 100;
	std::cout << "New weight after all decorators: " << 
		ship->getWeight(weightByDefault) << std::endl;

  return 0;
}

