// Badprog.com

#include <iostream>
#include <memory>
#include <string>
#include "DecoratorWeapon.h"

//-----------------------------------------------------------------------------
// Constructor
//-----------------------------------------------------------------------------
DecoratorWeapon::DecoratorWeapon(std::unique_ptr<IDecorator> decorator)
  : Decorator(std::move(decorator)) {
  std::cout << "Decorator weapon created." << std::endl;
  _weight = 75;
}

//-----------------------------------------------------------------------------
// Destructor
//-----------------------------------------------------------------------------
DecoratorWeapon::~DecoratorWeapon() {
  std::cout << "Decorator weapon destroyed." << std::endl;
}

//-----------------------------------------------------------------------------
// getWeight
//-----------------------------------------------------------------------------
double DecoratorWeapon::getWeight(double weight) {
  std::cout << "Weight from weapon." << std::endl;
  _weight += weight;
  std::cout << "Weight = " << _weight << std::endl;
  return Decorator::getWeight(_weight);
}
