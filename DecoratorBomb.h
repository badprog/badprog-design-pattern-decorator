#ifndef __BADPROG_DECORATORBOMB_H__
#define __BADPROG_DECORATORBOMB_H__

// Badprog.com

#include <memory>
#include <string>
#include "Decorator.h"

//-----------------------------------------------------------------------------
// DecoratorBomb
//-----------------------------------------------------------------------------
class DecoratorBomb : public Decorator
{
public:
	DecoratorBomb(std::unique_ptr<IDecorator> decorator = nullptr);
	~DecoratorBomb();

	double getWeight(double weigth) override;

private:
  double _weight;
};

#endif // __BADPROG_DECORATORBOMB_H__
