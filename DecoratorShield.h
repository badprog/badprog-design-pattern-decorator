#ifndef __BADPROG_DECORATORSHIELD_H__
#define __BADPROG_DECORATORSHIELD_H__

// Badprog.com

#include <memory>
#include <string>
#include "Decorator.h"

//-----------------------------------------------------------------------------
// DecoratorShield
//-----------------------------------------------------------------------------
class DecoratorShield : public Decorator
{
public:
	DecoratorShield(std::unique_ptr<IDecorator> decorator = nullptr);
	~DecoratorShield();

	double getWeight(double weight) override;

private:
  double _weight;
};

#endif // __BADPROG_DECORATORSHIELD_H__
