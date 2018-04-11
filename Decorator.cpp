// Badprog.com

#include <memory>
#include <iostream>
#include <string>
#include "Decorator.h"

//-----------------------------------------------------------------------------
// Constructor
//-----------------------------------------------------------------------------
Decorator::Decorator(std::unique_ptr<IDecorator> decorator)
    : _decorator(std::move(decorator)) {
   std::cout << "Decorator created." << std::endl;
}

//-----------------------------------------------------------------------------
// Destructor
//-----------------------------------------------------------------------------
Decorator::~Decorator() {
  std::cout << "Decorator destroyed." << std::endl;
}

//-----------------------------------------------------------------------------
// getWeight
//-----------------------------------------------------------------------------
double Decorator::getWeight(double weight) {
  std::cout << "Weight from Decorator." << std::endl;
  _weight += weight;
  return _decorator->getWeight(_weight);
}

