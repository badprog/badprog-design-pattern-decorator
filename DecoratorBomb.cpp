// Badprog.com

#include <iostream>
#include <memory>
#include <string>
#include "DecoratorBomb.h"

//-----------------------------------------------------------------------------
// Constructor
//-----------------------------------------------------------------------------
DecoratorBomb::DecoratorBomb(std::unique_ptr<IDecorator> decorator)
  : Decorator(std::move(decorator)) {
  std::cout << "Decorator bomb created." << std::endl;
  _weight = 50;
}

//-----------------------------------------------------------------------------
// Destructor
//-----------------------------------------------------------------------------
DecoratorBomb::~DecoratorBomb() {
  std::cout << "Decorator bomb destroyed." << std::endl;
}

//-----------------------------------------------------------------------------
// getWeight
//-----------------------------------------------------------------------------
double DecoratorBomb::getWeight(double weight) {
  std::cout << "Weight from bomb." << std::endl;
  _weight += weight;
  std::cout << "Weight = " << _weight << std::endl;
  return Decorator::getWeight(_weight);
}
