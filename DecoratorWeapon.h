#ifndef __BADPROG_DECORATORWEAPON_H__
#define __BADPROG_DECORATORWEAPON_H__

// Badprog.com

#include <memory>
#include <string>
#include "Decorator.h"

//-----------------------------------------------------------------------------
// DecoratorWeapon
//-----------------------------------------------------------------------------
class DecoratorWeapon : public Decorator
{
public:
	//DecoratorWeapon();
	DecoratorWeapon(std::unique_ptr<IDecorator> decorator = nullptr);
	~DecoratorWeapon();

	double getWeight(double weight) override;
	
private:
  double _weight;
};

#endif // __BADPROG_DECORATORWEAPON_H__
