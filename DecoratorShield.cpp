// Badprog.com

#include <iostream>
#include <memory>
#include <string>
#include "DecoratorShield.h"

//-----------------------------------------------------------------------------
// Constructor
//-----------------------------------------------------------------------------
DecoratorShield::DecoratorShield(std::unique_ptr<IDecorator> decorator)
  : Decorator(std::move(decorator)) {
  std::cout << "Decorator shield created." << std::endl;
  _weight = 150;
}

//-----------------------------------------------------------------------------
// Destructor
//-----------------------------------------------------------------------------
DecoratorShield::~DecoratorShield() {
  std::cout << "Decorator shield destroyed." << std::endl;
}

//-----------------------------------------------------------------------------
// getWeight
//-----------------------------------------------------------------------------
double DecoratorShield::getWeight(double weight) {
  std::cout << "Weight from shield." << std::endl;
  _weight += weight;
  std::cout << "Weight = " << _weight << std::endl;
  return Decorator::getWeight(_weight);
}
