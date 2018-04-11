// Badprog.com

#include <iostream>
#include <string>
#include "DShipTiny.h"

//-----------------------------------------------------------------------------
// Constructor
//-----------------------------------------------------------------------------
DShipTiny::DShipTiny() {
  std::cout << "ShipTiny created." << std::endl;
}

//-----------------------------------------------------------------------------
// Destructor
//-----------------------------------------------------------------------------
DShipTiny::~DShipTiny() {
  std::cout << "ShipTiny destroyed." << std::endl;
}

//-----------------------------------------------------------------------------
// decorate
//-----------------------------------------------------------------------------
double DShipTiny::getWeight(double weight) {
  std::cout << "Final weight from DShipTiny." << std::endl;
  return weight; // last and final return from the recursion
}
